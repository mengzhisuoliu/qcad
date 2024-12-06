// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaScriptHandler.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RFileImporterAdapter.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaScriptHandler::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RScriptHandler*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getSupportedFileExtensions, "getSupportedFileExtensions");
            
            REcmaHelper::registerFunction(&engine, proto, autostart, "autostart");
            
            REcmaHelper::registerFunction(&engine, proto, doScript, "doScript");
            
            REcmaHelper::registerFunction(&engine, proto, eval, "eval");
            
            REcmaHelper::registerFunction(&engine, proto, evalGlobal, "evalGlobal");
            
            REcmaHelper::registerFunction(&engine, proto, createFileImporter, "createFileImporter");
            
            REcmaHelper::registerFunction(&engine, proto, isRunning, "isRunning");
            
            REcmaHelper::registerFunction(&engine, proto, abort, "abort");
            
            REcmaHelper::registerFunction(&engine, proto, hasUncaughtExceptions, "hasUncaughtExceptions");
            
            REcmaHelper::registerFunction(&engine, proto, createActionDocumentLevel, "createActionDocumentLevel");
            
            REcmaHelper::registerFunction(&engine, proto, createActionApplicationLevel, "createActionApplicationLevel");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RScriptHandler*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, triggerActionApplicationLevel, "triggerActionApplicationLevel");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RScriptHandler",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaScriptHandler::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RScriptHandler: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaScriptHandler::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RScriptHandler"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaScriptHandler::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaScriptHandler::getSupportedFileExtensions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::getSupportedFileExtensions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::getSupportedFileExtensions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("getSupportedFileExtensions", context);
                  

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
    // return type 'QList < QString >'
    QList < QString > cppResult =
        
               self->getSupportedFileExtensions();
        // return type: QList < QString >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.getSupportedFileExtensions().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::getSupportedFileExtensions", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::autostart
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::autostart", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::autostart";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("autostart", context);
                  

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
    
               self->autostart();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->autostart(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isArray()
        ) /* type: QStringList */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isArray or QVariantMap
                    QStringList
                    a1;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(1),
                        a1
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->autostart(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.autostart().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::autostart", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::doScript
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::doScript", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::doScript";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("doScript", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->doScript(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isArray()
        ) /* type: QStringList */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isArray or QVariantMap
                    QStringList
                    a1;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(1),
                        a1
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->doScript(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.doScript().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::doScript", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::eval
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::eval", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::eval";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("eval", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->eval(a0);
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->eval(a0
        ,
    a1);
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.eval().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::eval", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::evalGlobal
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::evalGlobal", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::evalGlobal";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("evalGlobal", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->evalGlobal(a0);
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QVariant'
    QVariant cppResult =
        
               self->evalGlobal(a0
        ,
    a1);
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.evalGlobal().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::evalGlobal", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::createFileImporter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::createFileImporter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::createFileImporter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("createFileImporter", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument is reference
                    RDocument*
                    ap1 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RScriptHandler: Argument 1 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RFileImporterAdapter *'
    RFileImporterAdapter * cppResult =
        
               self->createFileImporter(a0
        ,
    a1);
        // return type: RFileImporterAdapter *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.createFileImporter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::createFileImporter", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::isRunning
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::isRunning", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::isRunning";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("isRunning", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->isRunning();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.isRunning().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::isRunning", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::abort
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::abort", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::abort";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("abort", context);
                  

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
    
               self->abort();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.abort().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::abort", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::hasUncaughtExceptions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::hasUncaughtExceptions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::hasUncaughtExceptions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("hasUncaughtExceptions", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->hasUncaughtExceptions();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.hasUncaughtExceptions().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::hasUncaughtExceptions", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::triggerActionApplicationLevel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::triggerActionApplicationLevel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::triggerActionApplicationLevel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RScriptHandler::
       triggerActionApplicationLevel(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isQObject()
        ) /* type: RGuiAction * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument is pointer
                    RGuiAction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RGuiAction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RScriptHandler: Argument 1 is not of type RGuiAction *RGuiAction *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RScriptHandler::
       triggerActionApplicationLevel(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.triggerActionApplicationLevel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::triggerActionApplicationLevel", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::createActionDocumentLevel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::createActionDocumentLevel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::createActionDocumentLevel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("createActionDocumentLevel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isQObject()
        ) /* type: RGuiAction * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument is pointer
                    RGuiAction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RGuiAction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RScriptHandler: Argument 1 is not of type RGuiAction *RGuiAction *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->createActionDocumentLevel(a0
        ,
    a1);
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isQObject()
        ) /* type: RGuiAction * */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument is pointer
                    RGuiAction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RGuiAction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RScriptHandler: Argument 1 is not of type RGuiAction *RGuiAction *.", context);                    
                    }
                
                    // argument is pointer
                    RDocumentInterface * a2 = NULL;

                    a2 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(2)
                        );
                    
                    if (a2==NULL && 
                        !context->argument(2).isNull()) {
                        return REcmaHelper::throwError("RScriptHandler: Argument 2 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->createActionDocumentLevel(a0
        ,
    a1
        ,
    a2);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.createActionDocumentLevel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::createActionDocumentLevel", context, engine);
            return result;
        }
         QScriptValue
        REcmaScriptHandler::createActionApplicationLevel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaScriptHandler::createActionApplicationLevel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaScriptHandler::createActionApplicationLevel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RScriptHandler* self = 
                        getSelf("createActionApplicationLevel", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isQObject()
        ) /* type: RGuiAction * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument is pointer
                    RGuiAction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RGuiAction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RScriptHandler: Argument 1 is not of type RGuiAction *RGuiAction *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->createActionApplicationLevel(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RScriptHandler.createActionApplicationLevel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaScriptHandler::createActionApplicationLevel", context, engine);
            return result;
        }
         QScriptValue REcmaScriptHandler::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RScriptHandler* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RScriptHandler(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaScriptHandler::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RScriptHandler* self = getSelf("RScriptHandler", context);
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
    RScriptHandler* REcmaScriptHandler::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RScriptHandler* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RScriptHandler >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RScriptHandler.%1(): "
                        "This object is not a RScriptHandler").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RScriptHandler* REcmaScriptHandler::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RScriptHandler* selfBase = getSelf(fName, context);
                RScriptHandler* self = dynamic_cast<RScriptHandler*>(selfBase);
                //return REcmaHelper::scriptValueTo<RScriptHandler >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RScriptHandler.%1(): "
                    "This object is not a RScriptHandler").arg(fName),
                    context);
            }

            return self;
            


        }
        