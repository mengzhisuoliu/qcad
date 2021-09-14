// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMASHAREDPOINTERDIMSTYLE_H
        #define RECMASHAREDPOINTERDIMSTYLE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimStyle.h"
            
            typedef QSharedPointer<RDimStyle> RDimStylePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerDimStyle {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRDimStyleData(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RDimStyleData:
        

        // methods of secondary base class RDimStyleData:
        static  QScriptValue
        initDefaults
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariantDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDoubleDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIntDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoolDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColorDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initFromSettings
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariant
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVariant
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDouble
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDouble
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeDouble
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setInt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeInt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBool
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBool
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeBool
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initDimX
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRtti
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateDocumentVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFromDocumentVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        render
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasProxy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimStyle* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimStyle* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    