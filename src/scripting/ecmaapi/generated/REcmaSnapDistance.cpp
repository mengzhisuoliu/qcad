// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSnapDistance.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnapEntityBase.h"
                 void REcmaSnapDistance::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSnapDistance*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnapEntityBase:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnapEntityBase*>());

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
    
        // conversion for base class RSnapEntityBase
        REcmaHelper::registerFunction(&engine, proto, getRSnapEntityBase, "getRSnapEntityBase");
        
        // conversion for base class RSnap
        REcmaHelper::registerFunction(&engine, proto, getRSnap, "getRSnap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, showUiOptions, "showUiOptions");
            
            REcmaHelper::registerFunction(&engine, proto, hideUiOptions, "hideUiOptions");
            
            REcmaHelper::registerFunction(&engine, proto, setDistance, "setDistance");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSnapDistance*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSnapDistance",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSnapDistance::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapDistance(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellSnapDistance
                    * cppResult =
                    new
                    REcmaShellSnapDistance
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapDistance(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSnapDistance::getRSnapEntityBase(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnapEntityBase* cppResult =
                    qscriptvalue_cast<RSnapDistance*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSnapDistance::getRSnap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnap* cppResult =
                    qscriptvalue_cast<RSnapDistance*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSnapDistance::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSnapDistance"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSnapDistance::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnapEntityBase");
    
        list.append("RSnap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSnapDistance::showUiOptions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapDistance::showUiOptions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapDistance::showUiOptions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapDistance* self = 
                        getSelf("showUiOptions", context);
                  

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
    // return type 'void'
    
               self->showUiOptions();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapDistance.showUiOptions().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapDistance::showUiOptions", context, engine);
            return result;
        }
         QScriptValue
        REcmaSnapDistance::hideUiOptions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapDistance::hideUiOptions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapDistance::hideUiOptions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapDistance* self = 
                        getSelf("hideUiOptions", context);
                  

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
    // return type 'void'
    
               self->hideUiOptions();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapDistance.hideUiOptions().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapDistance::hideUiOptions", context, engine);
            return result;
        }
         QScriptValue
        REcmaSnapDistance::setDistance
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapDistance::setDistance", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapDistance::setDistance";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapDistance* self = 
                        getSelf("setDistance", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setDistance(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapDistance.setDistance().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapDistance::setDistance", context, engine);
            return result;
        }
         QScriptValue REcmaSnapDistance::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSnapDistance* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSnapDistance(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSnapDistance::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSnapDistance* self = getSelf("RSnapDistance", context);
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
    RSnapDistance* REcmaSnapDistance::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSnapDistance* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSnapDistance >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSnapDistance.%1(): "
                        "This object is not a RSnapDistance").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellSnapDistance* REcmaSnapDistance::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSnapDistance* selfBase = getSelf(fName, context);
                REcmaShellSnapDistance* self = dynamic_cast<REcmaShellSnapDistance*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellSnapDistance >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSnapDistance.%1(): "
                    "This object is not a RSnapDistance").arg(fName),
                    context);
            }

            return self;
            


        }
        