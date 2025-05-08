import flask, pymongo, json
app=flask.Flask(_name_)
client=pymongo.MongoClient('mongodb+srv://mariaancabalutoiu:jeyuauQzrxWpIDim@cluster0.e83xcgo.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0');db=client.gettingStarted;col=db.people
@app.route('/entries',methods=['GET'])
def getEntries():entries=col.find();return json.dumps([e for e in entries])
@app.route('/entries',methods=['POST'])
def addEntry():data=flask.request.get_json();col.insert_one(data);return 'Entry added',201
if _name=='main_':app.run()