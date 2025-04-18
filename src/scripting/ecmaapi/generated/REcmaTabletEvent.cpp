// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaTabletEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsScene.h"
            
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaTabletEvent::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTabletEvent*) 0)));
        protoCreated = true;
    }

    
        // primary base class QTabletEvent:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QTabletEvent*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QTabletEvent
        REcmaHelper::registerFunction(&engine, proto, getQTabletEvent, "getQTabletEvent");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getModelPosition, "getModelPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getUcsPosition, "getUcsPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getScreenPosition, "getScreenPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsView, "getGraphicsView");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsScene, "getGraphicsScene");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTabletEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTabletEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaTabletEvent::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTabletEvent(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                ) /* type: QTabletEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    QTabletEvent*
                    ap0 =
                    qscriptvalue_cast<
                    QTabletEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){

                           return REcmaHelper::throwError("RTabletEvent: Argument 0 is not of type QTabletEvent* or QSharedPointer<QTabletEvent>.",
                               context);
                    }
                    QTabletEvent& a0 = *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){

                           return REcmaHelper::throwError("RTabletEvent: Argument 1 is not of type RGraphicsScene* or QSharedPointer<RGraphicsScene>.",
                               context);
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){

                           return REcmaHelper::throwError("RTabletEvent: Argument 2 is not of type RGraphicsView* or QSharedPointer<RGraphicsView>.",
                               context);
                    }
                    RGraphicsView& a2 = *ap2;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTabletEvent
                    * cppResult =
                    new
                    RTabletEvent
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTabletEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaTabletEvent::getQTabletEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QTabletEvent* cppResult =
                    qscriptvalue_cast<RTabletEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaTabletEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTabletEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaTabletEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QTabletEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaTabletEvent::getModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTabletEvent::getModelPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTabletEvent::getModelPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTabletEvent* self = 
                        getSelf("getModelPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getModelPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTabletEvent.getModelPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTabletEvent::getModelPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaTabletEvent::getUcsPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTabletEvent::getUcsPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTabletEvent::getUcsPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTabletEvent* self = 
                        getSelf("getUcsPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getUcsPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTabletEvent.getUcsPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTabletEvent::getUcsPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaTabletEvent::getScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTabletEvent::getScreenPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTabletEvent::getScreenPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTabletEvent* self = 
                        getSelf("getScreenPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getScreenPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTabletEvent.getScreenPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTabletEvent::getScreenPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaTabletEvent::getGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTabletEvent::getGraphicsView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTabletEvent::getGraphicsView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTabletEvent* self = 
                        getSelf("getGraphicsView", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsView &'
    RGraphicsView & cppResult =
        
               self->getGraphicsView();
        // return type: RGraphicsView &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTabletEvent.getGraphicsView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTabletEvent::getGraphicsView", context, engine);
            return result;
        }
         QScriptValue
        REcmaTabletEvent::getGraphicsScene
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTabletEvent::getGraphicsScene", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTabletEvent::getGraphicsScene";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTabletEvent* self = 
                        getSelf("getGraphicsScene", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsScene &'
    RGraphicsScene & cppResult =
        
               self->getGraphicsScene();
        // return type: RGraphicsScene &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTabletEvent.getGraphicsScene().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTabletEvent::getGraphicsScene", context, engine);
            return result;
        }
         QScriptValue REcmaTabletEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTabletEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTabletEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaTabletEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTabletEvent* self = getSelf("RTabletEvent", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RTabletEvent* REcmaTabletEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTabletEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTabletEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTabletEvent.%1(): "
                        "This object is not a RTabletEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTabletEvent* REcmaTabletEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTabletEvent* selfBase = getSelf(fName, context);
                RTabletEvent* self = dynamic_cast<RTabletEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTabletEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTabletEvent.%1(): "
                    "This object is not a RTabletEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        