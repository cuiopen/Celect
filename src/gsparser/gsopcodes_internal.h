ENUM_START(GSOpcodes)
	ENUM_ADD(DEBUGCHARPOS)
	ENUM_ADD(SIGNALDEFINITION)
	ENUM_ADD(SIGNALIMPLEMENTATION)
	ENUM_ADD(METHODDEFINITION)
	ENUM_ADD(METHODPARAMETER)
	ENUM_ADD(NATIVEMETHODREF)
	ENUM_ADD(NATIVESTATICMETHODREF)
	ENUM_ADD(STATICMETHODDEFINITION)
	ENUM_ADD(ORIGINALSTACKMETHODMARKER)
	ENUM_ADD(METHODCALLONORIGINALSTACKMARKER)
	ENUM_ADD(FOCUSSELFVARIABLES)
	ENUM_ADD(FOCUSLOCALVARIABLES)
	ENUM_ADD(FOCUSMETHODPARAMETER)
	ENUM_ADD(FOCUSSTACKTOP)
	ENUM_ADD(FOCUSSTATEVARS)
	ENUM_ADD(FOCUSVARIABLE)
	ENUM_ADD(PUSHVARIABLE)
	ENUM_ADD(PUSHVARIABLEREF)
	ENUM_ADD(POPVARIABLEREF)
	ENUM_ADD(POPHANDLE)
	ENUM_ADD(POPINT)
	ENUM_ADD(POPBOOLEAN)
	ENUM_ADD(POPPOINTER)
	ENUM_ADD(POPFLOAT)
	ENUM_ADD(POPSTRING)
	ENUM_ADD(POPOBJECT)
	ENUM_ADD(POPSTRUCT)
	ENUM_ADD(ADDINT)
	ENUM_ADD(SUBINT)
	ENUM_ADD(MULTINT)
	ENUM_ADD(DIVINT)
	ENUM_ADD(MODINT)
	ENUM_ADD(INCINT)
	ENUM_ADD(REPLACEINTREFWITHVALUE)
	ENUM_ADD(REPLACESECONDTOPINTREFWITHVALUE)
	ENUM_ADD(DUPLICATETOP)
	ENUM_ADD(DECINT)
	ENUM_ADD(ADDFLOAT)
	ENUM_ADD(SUBFLOAT)
	ENUM_ADD(MULTFLOAT)
	ENUM_ADD(DIVFLOAT)
	ENUM_ADD(MODFLOAT)
	ENUM_ADD(PUSHCONSTINT)
	ENUM_ADD(PUSHCONSTBOOLEAN)
	ENUM_ADD(PUSHCONSTFLOAT)
	ENUM_ADD(PUSHCONSTNULL)
	ENUM_ADD(PUSHCONSTSTRING)
	ENUM_ADD(COMPAREINT)
	ENUM_ADD(COMPAREBOOLEAN)
	ENUM_ADD(COMPAREFLOAT)
	ENUM_ADD(COMPAREPOINTER)
	ENUM_ADD(TESTBOOLEAN)
	ENUM_ADD(TESTINTONNULL)
	ENUM_ADD(TESTPTRONNULL)
	ENUM_ADD(NEGATEINT)
	ENUM_ADD(SQRTFLOAT)
	ENUM_ADD(NEGATEFLOAT)
	ENUM_ADD(NEGATEBOOLEAN)
	ENUM_ADD(PUTCOMPARERESULTBOOLEAN)
	ENUM_ADD(BRANCH)
	ENUM_ADD(BRANCHEQ)
	ENUM_ADD(BRANCHNE)
	ENUM_ADD(BRANCHLT)
	ENUM_ADD(BRANCHLE)
	ENUM_ADD(BRANCHGT)
	ENUM_ADD(BRANCHGE)
	ENUM_ADD(PUTCOMPARECONDITIONBOOLEAN)
	ENUM_ADD(CALLMETHOD)
	ENUM_ADD(CALLSUPERMETHOD)
	ENUM_ADD(CALLSTATICMETHOD)
	ENUM_ADD(RETURN)
	ENUM_ADD(LABEL)
	ENUM_ADD(LOCALVAR)
	ENUM_ADD(RETURNWITHVALUE)
	ENUM_ADD(ASSIGNMENT)
	ENUM_ADD(PUSHLASTCALLRETURN)
	ENUM_ADD(CLASSCAST)
	ENUM_ADD(NEWOBJECT)
	ENUM_ADD(ASSERT)
	ENUM_ADD(ORJUMP)
	ENUM_ADD(ANDJUMP)
	ENUM_ADD(ANDOR_EXPRESSION_END)
	ENUM_ADD(BITWISEOR)
	ENUM_ADD(BITWISEAND)
	ENUM_ADD(SWITCHBEGIN)
	ENUM_ADD(SWITCHEND)
	ENUM_ADD(SWITCHCASE)
	ENUM_ADD(STACKEMPTYCHECKPOINT)
	ENUM_ADD(SWAPTOP)
	ENUM_ADD(SIMPLEGETTER)
	ENUM_ADD(METHODFINALMARKER)
	ENUM_ADD(CHANGETOPELEMENTTYPE)
	ENUM_ADD(MAKEANONSTRUCT)
	ENUM_ADD(PERFORMANONSTRUCTASSIGNMENT)
	ENUM_ADD(LOG)
	ENUM_ADD(CHECKINTRANGE)
	ENUM_ADD(FOCUSSTRUCTUREMEMBERARRAYINDEX)
	ENUM_ADD(PUSHSTRUCTUREMEMBERARRAYINDEX)
	ENUM_ADD(CALLNATIVEINIT)
	ENUM_ADD(STATICSTRUCTCAST)
	ENUM_ADD(TRY)
	ENUM_ADD(TRYEND)
	ENUM_ADD(THROW)
	ENUM_ADD(RECORDTRANSACTIONMETHODINVOKE)
	ENUM_ADD(BEGINTRANSACTION)
	ENUM_ADD(ENDTRANSACTION)
	ENUM_ADD(RECORDTRANSACTIONRESULTMETHODINVOKE)
	ENUM_ADD(REFLECTIONCLASSTYPE)
	ENUM_ADD(CRASHCHECKPOINT)
	ENUM_ADD(REQUESTSAVE)
	ENUM_ADD(CALLER_STATISTIC)
ENUM_END