// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERFACEENTITY_H
        #define RECMASHAREDPOINTERFACEENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RFaceEntity.h"
            
            typedef QSharedPointer<RFaceEntity> RFaceEntityPointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerFaceEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRtti
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStaticPropertyTypeIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RFaceEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RFaceEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    