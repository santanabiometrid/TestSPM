#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BiometridStandardAccount, BiometridStandardAccountCompanion, BiometridStandardAction, BiometridStandardActionCompanion, BiometridStandardBiometridStandard, BiometridStandardColors, BiometridStandardColorsCompanion, BiometridStandardCreateProcessData, BiometridStandardCreateProcessDataCompanion, BiometridStandardCreateProcessResponse, BiometridStandardCreateProcessResponseCompanion, BiometridStandardCustomization, BiometridStandardCustomizationCompanion, BiometridStandardData, BiometridStandardDataCompanion, BiometridStandardDoormanService, BiometridStandardError, BiometridStandardErrorCompanion, BiometridStandardErrorInfo, BiometridStandardErrorInfoCompanion, BiometridStandardErrorResponse, BiometridStandardErrorResponseCompanion, BiometridStandardErrorResponseData, BiometridStandardErrorResponseDataCompanion, BiometridStandardErrorResponseMeta, BiometridStandardErrorResponseMetaCompanion, BiometridStandardField, BiometridStandardFieldCompanion, BiometridStandardGeneral, BiometridStandardGeneralCompanion, BiometridStandardGetFlowData, BiometridStandardGetFlowDataCompanion, BiometridStandardGetFlowResponse, BiometridStandardGetFlowResponseCompanion, BiometridStandardGetFlowStep, BiometridStandardGetFlowStepCompanion, BiometridStandardIcons, BiometridStandardIconsCompanion, BiometridStandardImages, BiometridStandardImagesCompanion, BiometridStandardInitializeResponse, BiometridStandardInitializeResponseCompanion, BiometridStandardKotlinAbstractCoroutineContextElement, BiometridStandardKotlinAbstractCoroutineContextKey<B, E>, BiometridStandardKotlinArray<T>, BiometridStandardKotlinByteArray, BiometridStandardKotlinByteIterator, BiometridStandardKotlinCancellationException, BiometridStandardKotlinEnum<E>, BiometridStandardKotlinEnumCompanion, BiometridStandardKotlinException, BiometridStandardKotlinIllegalStateException, BiometridStandardKotlinKTypeProjection, BiometridStandardKotlinKTypeProjectionCompanion, BiometridStandardKotlinKVariance, BiometridStandardKotlinNothing, BiometridStandardKotlinPair<__covariant A, __covariant B>, BiometridStandardKotlinRuntimeException, BiometridStandardKotlinThrowable, BiometridStandardKotlinUnit, BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher, BiometridStandardKotlinx_coroutines_coreCoroutineDispatcherKey, BiometridStandardKotlinx_serialization_coreSerialKind, BiometridStandardKotlinx_serialization_coreSerializersModule, BiometridStandardKotlinx_serialization_jsonJsonElement, BiometridStandardKotlinx_serialization_jsonJsonElementCompanion, BiometridStandardKtor_client_coreHttpClient, BiometridStandardKtor_client_coreHttpClientCall, BiometridStandardKtor_client_coreHttpClientCallCompanion, BiometridStandardKtor_client_coreHttpClientConfig<T>, BiometridStandardKtor_client_coreHttpClientEngineConfig, BiometridStandardKtor_client_coreHttpReceivePipeline, BiometridStandardKtor_client_coreHttpReceivePipelinePhases, BiometridStandardKtor_client_coreHttpRequestBuilder, BiometridStandardKtor_client_coreHttpRequestBuilderCompanion, BiometridStandardKtor_client_coreHttpRequestData, BiometridStandardKtor_client_coreHttpRequestPipeline, BiometridStandardKtor_client_coreHttpRequestPipelinePhases, BiometridStandardKtor_client_coreHttpResponse, BiometridStandardKtor_client_coreHttpResponseContainer, BiometridStandardKtor_client_coreHttpResponseData, BiometridStandardKtor_client_coreHttpResponsePipeline, BiometridStandardKtor_client_coreHttpResponsePipelinePhases, BiometridStandardKtor_client_coreHttpSendPipeline, BiometridStandardKtor_client_coreHttpSendPipelinePhases, BiometridStandardKtor_client_coreProxyConfig, BiometridStandardKtor_eventsEventDefinition<T>, BiometridStandardKtor_eventsEvents, BiometridStandardKtor_httpContentType, BiometridStandardKtor_httpContentTypeCompanion, BiometridStandardKtor_httpHeaderValueParam, BiometridStandardKtor_httpHeaderValueWithParameters, BiometridStandardKtor_httpHeaderValueWithParametersCompanion, BiometridStandardKtor_httpHeadersBuilder, BiometridStandardKtor_httpHttpMethod, BiometridStandardKtor_httpHttpMethodCompanion, BiometridStandardKtor_httpHttpProtocolVersion, BiometridStandardKtor_httpHttpProtocolVersionCompanion, BiometridStandardKtor_httpHttpStatusCode, BiometridStandardKtor_httpHttpStatusCodeCompanion, BiometridStandardKtor_httpOutgoingContent, BiometridStandardKtor_httpURLBuilder, BiometridStandardKtor_httpURLBuilderCompanion, BiometridStandardKtor_httpURLProtocol, BiometridStandardKtor_httpURLProtocolCompanion, BiometridStandardKtor_httpUrl, BiometridStandardKtor_httpUrlCompanion, BiometridStandardKtor_ioBuffer, BiometridStandardKtor_ioBufferCompanion, BiometridStandardKtor_ioByteReadPacket, BiometridStandardKtor_ioByteReadPacketCompanion, BiometridStandardKtor_ioChunkBuffer, BiometridStandardKtor_ioChunkBufferCompanion, BiometridStandardKtor_ioInput, BiometridStandardKtor_ioInputCompanion, BiometridStandardKtor_ioMemory, BiometridStandardKtor_ioMemoryCompanion, BiometridStandardKtor_utilsAttributeKey<T>, BiometridStandardKtor_utilsGMTDate, BiometridStandardKtor_utilsGMTDateCompanion, BiometridStandardKtor_utilsMonth, BiometridStandardKtor_utilsMonthCompanion, BiometridStandardKtor_utilsPipeline<TSubject, TContext>, BiometridStandardKtor_utilsPipelinePhase, BiometridStandardKtor_utilsStringValuesBuilderImpl, BiometridStandardKtor_utilsTypeInfo, BiometridStandardKtor_utilsWeekDay, BiometridStandardKtor_utilsWeekDayCompanion, BiometridStandardLanguage, BiometridStandardMeta, BiometridStandardMetaCompanion, BiometridStandardNetworkError, BiometridStandardNetworkErrorHttpError, BiometridStandardNetworkErrorNetworkFailure, BiometridStandardNetworkErrorNotInitialized, BiometridStandardNetworkErrorUnknownError, BiometridStandardNetworkSettings, BiometridStandardPath, BiometridStandardPathCompanion, BiometridStandardProvider, BiometridStandardProviderCompanion, BiometridStandardRequestInfo, BiometridStandardResult<__covariant T, __covariant E>, BiometridStandardResultError<E>, BiometridStandardResultSuccess<T>, BiometridStandardRule, BiometridStandardRuleCompanion, BiometridStandardSettings, BiometridStandardSettingsCompanion, BiometridStandardStep, BiometridStandardStepCompanion, BiometridStandardStepResponse, BiometridStandardStepResponseAction, BiometridStandardStepResponseActionCompanion, BiometridStandardStepResponseCompanion, BiometridStandardStepResponseData, BiometridStandardStepResponseDataCompanion, BiometridStandardStepResponseSettings, BiometridStandardStepResponseSettingsCompanion, BiometridStandardSystemClass, BiometridStandardSystemClassCompanion, BiometridStandardTranslations, BiometridStandardTranslationsCompanion, BiometridStandardTypography, BiometridStandardTypographyCompanion;

@protocol BiometridStandardBiometridStandardInitCallback, BiometridStandardBiometridStandardProcessCallback, BiometridStandardBiometridStandardProtocol, BiometridStandardINetworkService, BiometridStandardKotlinAnnotation, BiometridStandardKotlinAppendable, BiometridStandardKotlinComparable, BiometridStandardKotlinContinuation, BiometridStandardKotlinContinuationInterceptor, BiometridStandardKotlinCoroutineContext, BiometridStandardKotlinCoroutineContextElement, BiometridStandardKotlinCoroutineContextKey, BiometridStandardKotlinFunction, BiometridStandardKotlinIterator, BiometridStandardKotlinKAnnotatedElement, BiometridStandardKotlinKClass, BiometridStandardKotlinKClassifier, BiometridStandardKotlinKDeclarationContainer, BiometridStandardKotlinKType, BiometridStandardKotlinMapEntry, BiometridStandardKotlinSequence, BiometridStandardKotlinSuspendFunction1, BiometridStandardKotlinSuspendFunction2, BiometridStandardKotlinx_coroutines_coreChildHandle, BiometridStandardKotlinx_coroutines_coreChildJob, BiometridStandardKotlinx_coroutines_coreCoroutineScope, BiometridStandardKotlinx_coroutines_coreDisposableHandle, BiometridStandardKotlinx_coroutines_coreJob, BiometridStandardKotlinx_coroutines_coreParentJob, BiometridStandardKotlinx_coroutines_coreRunnable, BiometridStandardKotlinx_coroutines_coreSelectClause, BiometridStandardKotlinx_coroutines_coreSelectClause0, BiometridStandardKotlinx_coroutines_coreSelectInstance, BiometridStandardKotlinx_serialization_coreCompositeDecoder, BiometridStandardKotlinx_serialization_coreCompositeEncoder, BiometridStandardKotlinx_serialization_coreDecoder, BiometridStandardKotlinx_serialization_coreDeserializationStrategy, BiometridStandardKotlinx_serialization_coreEncoder, BiometridStandardKotlinx_serialization_coreKSerializer, BiometridStandardKotlinx_serialization_coreSerialDescriptor, BiometridStandardKotlinx_serialization_coreSerializationStrategy, BiometridStandardKotlinx_serialization_coreSerializersModuleCollector, BiometridStandardKtor_client_coreHttpClientEngine, BiometridStandardKtor_client_coreHttpClientEngineCapability, BiometridStandardKtor_client_coreHttpClientPlugin, BiometridStandardKtor_client_coreHttpRequest, BiometridStandardKtor_httpHeaders, BiometridStandardKtor_httpHttpMessage, BiometridStandardKtor_httpHttpMessageBuilder, BiometridStandardKtor_httpParameters, BiometridStandardKtor_httpParametersBuilder, BiometridStandardKtor_ioByteReadChannel, BiometridStandardKtor_ioCloseable, BiometridStandardKtor_ioObjectPool, BiometridStandardKtor_ioReadSession, BiometridStandardKtor_utilsAttributes, BiometridStandardKtor_utilsStringValues, BiometridStandardKtor_utilsStringValuesBuilder, BiometridStandardPlatform, BiometridStandardRequestsProtocol;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BiometridStandardBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BiometridStandardBase (BiometridStandardBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BiometridStandardMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BiometridStandardMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBiometridStandardKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BiometridStandardNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BiometridStandardByte : BiometridStandardNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BiometridStandardUByte : BiometridStandardNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BiometridStandardShort : BiometridStandardNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BiometridStandardUShort : BiometridStandardNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BiometridStandardInt : BiometridStandardNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BiometridStandardUInt : BiometridStandardNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BiometridStandardLong : BiometridStandardNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BiometridStandardULong : BiometridStandardNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BiometridStandardFloat : BiometridStandardNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BiometridStandardDouble : BiometridStandardNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BiometridStandardBoolean : BiometridStandardNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("BiometridStandardProtocol")))
@protocol BiometridStandardBiometridStandardProtocol
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createProcessWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createProcess(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentStep(processId:completionHandler:)")));
- (BiometridStandardCustomization * _Nullable)getCustomization __attribute__((swift_name("getCustomization()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFlowWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getFlow(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeInitCallback:(id<BiometridStandardBiometridStandardInitCallback>)initCallback completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(initCallback:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previousStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("previousStep(processId:completionHandler:)")));
- (void)setCallback:(id<BiometridStandardBiometridStandardProcessCallback>)callback __attribute__((swift_name("set(callback:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepProcessId:(NSString *)processId data:(NSDictionary<NSString *, id> * _Nullable)data completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStep(processId:data:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometridStandard")))
@interface BiometridStandardBiometridStandard : BiometridStandardBase <BiometridStandardBiometridStandardProtocol>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)biometridStandard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardBiometridStandard *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createProcessWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createProcess(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentStep(processId:completionHandler:)")));
- (BiometridStandardCustomization * _Nullable)getCustomization __attribute__((swift_name("getCustomization()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFlowWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getFlow(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeInitCallback:(id<BiometridStandardBiometridStandardInitCallback>)initCallback completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(initCallback:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previousStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("previousStep(processId:completionHandler:)")));
- (void)setCallback:(id<BiometridStandardBiometridStandardProcessCallback>)callback __attribute__((swift_name("set(callback:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepProcessId:(NSString *)processId data:(NSDictionary<NSString *, id> * _Nullable)data completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStep(processId:data:completionHandler:)")));
@end

__attribute__((swift_name("Platform")))
@protocol BiometridStandardPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface BiometridStandardIOSPlatform : BiometridStandardBase <BiometridStandardPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("BiometridStandardInitCallback")))
@protocol BiometridStandardBiometridStandardInitCallback
@required
- (void)initializationFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("initializationFailure(error:)")));
- (void)initializationSuccess __attribute__((swift_name("initializationSuccess()")));
@property (readonly) NSString *app __attribute__((swift_name("app")));
@property (readonly) NSString *credential __attribute__((swift_name("credential")));
@property (readonly) NSDictionary<id, id> * _Nullable customHeaders __attribute__((swift_name("customHeaders")));
@property (readonly) BiometridStandardLanguage *language __attribute__((swift_name("language")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("BiometridStandardProcessCallback")))
@protocol BiometridStandardBiometridStandardProcessCallback
@required
- (void)createProcessFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("createProcessFailure(error:)")));
- (void)createProcessSuccessProcessId:(NSString * _Nullable)processId __attribute__((swift_name("createProcessSuccess(processId:)")));
- (void)getCurrentStepFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("getCurrentStepFailure(error:)")));
- (void)getCurrentStepSuccessResponse:(BiometridStandardStepResponse *)response __attribute__((swift_name("getCurrentStepSuccess(response:)")));
- (void)getFlowFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("getFlowFailure(error:)")));
- (void)getFlowSuccessResponse:(BiometridStandardGetFlowResponse *)response __attribute__((swift_name("getFlowSuccess(response:)")));
- (void)previousStepFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("previousStepFailure(error:)")));
- (void)previousStepSuccessResponse:(BiometridStandardStepResponse *)response __attribute__((swift_name("previousStepSuccess(response:)")));
- (void)updateStepFailureError:(BiometridStandardErrorInfo *)error __attribute__((swift_name("updateStepFailure(error:)")));
- (void)updateStepSuccessResponse:(BiometridStandardStepResponse *)response __attribute__((swift_name("updateStepSuccess(response:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BiometridStandardKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BiometridStandardKotlinEnum<E> : BiometridStandardBase <BiometridStandardKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface BiometridStandardLanguage : BiometridStandardKotlinEnum<BiometridStandardLanguage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometridStandardLanguage *english __attribute__((swift_name("english")));
@property (class, readonly) BiometridStandardLanguage *portuguese __attribute__((swift_name("portuguese")));
@property (class, readonly) BiometridStandardLanguage *french __attribute__((swift_name("french")));
@property (class, readonly) BiometridStandardLanguage *spanish __attribute__((swift_name("spanish")));
@property (class, readonly) BiometridStandardLanguage *italian __attribute__((swift_name("italian")));
+ (BiometridStandardKotlinArray<BiometridStandardLanguage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BiometridStandardLanguage *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorInfo")))
@interface BiometridStandardErrorInfo : BiometridStandardBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardErrorInfoCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardErrorInfo *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorInfo.Companion")))
@interface BiometridStandardErrorInfoCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardErrorInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeaderOptions")))
@interface BiometridStandardHeaderOptions : BiometridStandardBase
- (instancetype)initWithUrl:(NSString *)url headers:(NSDictionary<id, id> * _Nullable)headers parameters:(NSDictionary<id, id> * _Nullable)parameters __attribute__((swift_name("init(url:headers:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NSDictionary<id, id> * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInfo")))
@interface BiometridStandardRequestInfo : BiometridStandardBase
- (instancetype)initWithBaseUrl:(NSString * _Nullable)baseUrl url:(NSString * _Nullable)url headers:(BiometridStandardMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("init(baseUrl:url:headers:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardRequestInfo *)doCopyBaseUrl:(NSString * _Nullable)baseUrl url:(NSString * _Nullable)url headers:(BiometridStandardMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("doCopy(baseUrl:url:headers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) BiometridStandardMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account")))
@interface BiometridStandardAccount : BiometridStandardBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name language:(NSString * _Nullable)language languages:(NSArray<NSString *> * _Nullable)languages customization:(BiometridStandardCustomization * _Nullable)customization __attribute__((swift_name("init(id:name:language:languages:customization:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardAccountCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardAccount *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name language:(NSString * _Nullable)language languages:(NSArray<NSString *> * _Nullable)languages customization:(BiometridStandardCustomization * _Nullable)customization __attribute__((swift_name("doCopy(id:name:language:languages:customization:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardCustomization * _Nullable customization __attribute__((swift_name("customization")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSArray<NSString *> * _Nullable languages __attribute__((swift_name("languages")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account.Companion")))
@interface BiometridStandardAccountCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action")))
@interface BiometridStandardAction : BiometridStandardBase
- (instancetype)initWithForm:(NSString * _Nullable)form documentNFC:(NSString * _Nullable)documentNFC documentOcr:(NSString * _Nullable)documentOcr documentSignAdvancedOtp:(NSString * _Nullable)documentSignAdvancedOtp documentSignQualifiedCmd:(NSString * _Nullable)documentSignQualifiedCmd faceCompare2D2D:(NSString * _Nullable)faceCompare2D2D faceCompare3D2D:(NSString * _Nullable)faceCompare3D2D faceEnroll2D:(NSString * _Nullable)faceEnroll2D faceEnroll3D:(NSString * _Nullable)faceEnroll3D faceLiveness3D:(NSString * _Nullable)faceLiveness3D faceLiveness2D:(NSString * _Nullable)faceLiveness2D faceVerify2D:(NSString * _Nullable)faceVerify2D faceVerify3D:(NSString * _Nullable)faceVerify3D jointOwnership:(NSString * _Nullable)jointOwnership otp:(NSString * _Nullable)otp videoconference:(NSString * _Nullable)videoconference __attribute__((swift_name("init(form:documentNFC:documentOcr:documentSignAdvancedOtp:documentSignQualifiedCmd:faceCompare2D2D:faceCompare3D2D:faceEnroll2D:faceEnroll3D:faceLiveness3D:faceLiveness2D:faceVerify2D:faceVerify3D:jointOwnership:otp:videoconference:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardActionCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardAction *)doCopyForm:(NSString * _Nullable)form documentNFC:(NSString * _Nullable)documentNFC documentOcr:(NSString * _Nullable)documentOcr documentSignAdvancedOtp:(NSString * _Nullable)documentSignAdvancedOtp documentSignQualifiedCmd:(NSString * _Nullable)documentSignQualifiedCmd faceCompare2D2D:(NSString * _Nullable)faceCompare2D2D faceCompare3D2D:(NSString * _Nullable)faceCompare3D2D faceEnroll2D:(NSString * _Nullable)faceEnroll2D faceEnroll3D:(NSString * _Nullable)faceEnroll3D faceLiveness3D:(NSString * _Nullable)faceLiveness3D faceLiveness2D:(NSString * _Nullable)faceLiveness2D faceVerify2D:(NSString * _Nullable)faceVerify2D faceVerify3D:(NSString * _Nullable)faceVerify3D jointOwnership:(NSString * _Nullable)jointOwnership otp:(NSString * _Nullable)otp videoconference:(NSString * _Nullable)videoconference __attribute__((swift_name("doCopy(form:documentNFC:documentOcr:documentSignAdvancedOtp:documentSignQualifiedCmd:faceCompare2D2D:faceCompare3D2D:faceEnroll2D:faceEnroll3D:faceLiveness3D:faceLiveness2D:faceVerify2D:faceVerify3D:jointOwnership:otp:videoconference:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="document-nfc")
*/
@property (readonly) NSString * _Nullable documentNFC __attribute__((swift_name("documentNFC")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="document-ocr")
*/
@property (readonly) NSString * _Nullable documentOcr __attribute__((swift_name("documentOcr")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="document-sign-advanced-otp")
*/
@property (readonly) NSString * _Nullable documentSignAdvancedOtp __attribute__((swift_name("documentSignAdvancedOtp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="document-sign-qualified-cmd")
*/
@property (readonly) NSString * _Nullable documentSignQualifiedCmd __attribute__((swift_name("documentSignQualifiedCmd")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-compare-2d2d")
*/
@property (readonly) NSString * _Nullable faceCompare2D2D __attribute__((swift_name("faceCompare2D2D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-compare-3d2d")
*/
@property (readonly) NSString * _Nullable faceCompare3D2D __attribute__((swift_name("faceCompare3D2D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-enroll-2d")
*/
@property (readonly) NSString * _Nullable faceEnroll2D __attribute__((swift_name("faceEnroll2D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-enroll-3d")
*/
@property (readonly) NSString * _Nullable faceEnroll3D __attribute__((swift_name("faceEnroll3D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-liveness-2d")
*/
@property (readonly) NSString * _Nullable faceLiveness2D __attribute__((swift_name("faceLiveness2D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-liveness-3d")
*/
@property (readonly) NSString * _Nullable faceLiveness3D __attribute__((swift_name("faceLiveness3D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-verify-2d")
*/
@property (readonly) NSString * _Nullable faceVerify2D __attribute__((swift_name("faceVerify2D")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="face-verify-3d")
*/
@property (readonly) NSString * _Nullable faceVerify3D __attribute__((swift_name("faceVerify3D")));
@property (readonly) NSString * _Nullable form __attribute__((swift_name("form")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="joint-ownership")
*/
@property (readonly) NSString * _Nullable jointOwnership __attribute__((swift_name("jointOwnership")));
@property (readonly) NSString * _Nullable otp __attribute__((swift_name("otp")));
@property (readonly) NSString * _Nullable videoconference __attribute__((swift_name("videoconference")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Action.Companion")))
@interface BiometridStandardActionCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardActionCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Colors")))
@interface BiometridStandardColors : BiometridStandardBase
- (instancetype)initWithPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary neutral:(NSString * _Nullable)neutral neutralLight:(NSString * _Nullable)neutralLight neutralDark:(NSString * _Nullable)neutralDark success:(NSString * _Nullable)success warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error white:(NSString * _Nullable)white black:(NSString * _Nullable)black icons:(NSString * _Nullable)icons extra:(NSString * _Nullable)extra extra1:(NSString * _Nullable)extra1 extraGreen:(NSString * _Nullable)extraGreen extraGreen1:(NSString * _Nullable)extraGreen1 __attribute__((swift_name("init(primary:secondary:neutral:neutralLight:neutralDark:success:warning:error:white:black:icons:extra:extra1:extraGreen:extraGreen1:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardColorsCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardColors *)doCopyPrimary:(NSString * _Nullable)primary secondary:(NSString * _Nullable)secondary neutral:(NSString * _Nullable)neutral neutralLight:(NSString * _Nullable)neutralLight neutralDark:(NSString * _Nullable)neutralDark success:(NSString * _Nullable)success warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error white:(NSString * _Nullable)white black:(NSString * _Nullable)black icons:(NSString * _Nullable)icons extra:(NSString * _Nullable)extra extra1:(NSString * _Nullable)extra1 extraGreen:(NSString * _Nullable)extraGreen extraGreen1:(NSString * _Nullable)extraGreen1 __attribute__((swift_name("doCopy(primary:secondary:neutral:neutralLight:neutralDark:success:warning:error:white:black:icons:extra:extra1:extraGreen:extraGreen1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable black __attribute__((swift_name("black")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable extra __attribute__((swift_name("extra")));
@property (readonly) NSString * _Nullable extra1 __attribute__((swift_name("extra1")));
@property (readonly) NSString * _Nullable extraGreen __attribute__((swift_name("extraGreen")));
@property (readonly) NSString * _Nullable extraGreen1 __attribute__((swift_name("extraGreen1")));
@property (readonly) NSString * _Nullable icons __attribute__((swift_name("icons")));
@property (readonly) NSString * _Nullable neutral __attribute__((swift_name("neutral")));
@property (readonly) NSString * _Nullable neutralDark __attribute__((swift_name("neutralDark")));
@property (readonly) NSString * _Nullable neutralLight __attribute__((swift_name("neutralLight")));
@property (readonly) NSString * _Nullable primary __attribute__((swift_name("primary")));
@property (readonly) NSString * _Nullable secondary __attribute__((swift_name("secondary")));
@property (readonly) NSString * _Nullable success __attribute__((swift_name("success")));
@property (readonly) NSString * _Nullable warning __attribute__((swift_name("warning")));
@property (readonly) NSString * _Nullable white __attribute__((swift_name("white")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Colors.Companion")))
@interface BiometridStandardColorsCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardColorsCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateProcessData")))
@interface BiometridStandardCreateProcessData : BiometridStandardBase
- (instancetype)initWithProcessId:(NSString * _Nullable)processId flowId:(NSString * _Nullable)flowId __attribute__((swift_name("init(processId:flowId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardCreateProcessDataCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardCreateProcessData *)doCopyProcessId:(NSString * _Nullable)processId flowId:(NSString * _Nullable)flowId __attribute__((swift_name("doCopy(processId:flowId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable flowId __attribute__((swift_name("flowId")));
@property (readonly) NSString * _Nullable processId __attribute__((swift_name("processId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateProcessData.Companion")))
@interface BiometridStandardCreateProcessDataCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardCreateProcessDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateProcessResponse")))
@interface BiometridStandardCreateProcessResponse : BiometridStandardBase
- (instancetype)initWithData:(BiometridStandardCreateProcessData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("init(data:meta:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardCreateProcessResponseCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardCreateProcessResponse *)doCopyData:(BiometridStandardCreateProcessData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("doCopy(data:meta:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardCreateProcessData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) BiometridStandardMeta * _Nullable meta __attribute__((swift_name("meta")));
@property (readonly) BiometridStandardBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateProcessResponse.Companion")))
@interface BiometridStandardCreateProcessResponseCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardCreateProcessResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customization")))
@interface BiometridStandardCustomization : BiometridStandardBase
- (instancetype)initWithColors:(BiometridStandardColors * _Nullable)colors icons:(BiometridStandardIcons * _Nullable)icons typography:(BiometridStandardTypography * _Nullable)typography images:(BiometridStandardImages * _Nullable)images translations:(BiometridStandardTranslations * _Nullable)translations settings:(BiometridStandardSettings * _Nullable)settings __attribute__((swift_name("init(colors:icons:typography:images:translations:settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardCustomizationCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardCustomization *)doCopyColors:(BiometridStandardColors * _Nullable)colors icons:(BiometridStandardIcons * _Nullable)icons typography:(BiometridStandardTypography * _Nullable)typography images:(BiometridStandardImages * _Nullable)images translations:(BiometridStandardTranslations * _Nullable)translations settings:(BiometridStandardSettings * _Nullable)settings __attribute__((swift_name("doCopy(colors:icons:typography:images:translations:settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardColors * _Nullable colors __attribute__((swift_name("colors")));
@property (readonly) BiometridStandardIcons * _Nullable icons __attribute__((swift_name("icons")));
@property (readonly) BiometridStandardImages * _Nullable images __attribute__((swift_name("images")));
@property (readonly) BiometridStandardSettings * _Nullable settings __attribute__((swift_name("settings")));
@property (readonly) BiometridStandardTranslations * _Nullable translations __attribute__((swift_name("translations")));
@property (readonly) BiometridStandardTypography * _Nullable typography __attribute__((swift_name("typography")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Customization.Companion")))
@interface BiometridStandardCustomizationCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardCustomizationCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data")))
@interface BiometridStandardData : BiometridStandardBase
- (instancetype)initWithAccount:(BiometridStandardAccount * _Nullable)account system:(BiometridStandardSystemClass * _Nullable)system providers:(NSArray<NSString *> * _Nullable)providers __attribute__((swift_name("init(account:system:providers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardDataCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardData *)doCopyAccount:(BiometridStandardAccount * _Nullable)account system:(BiometridStandardSystemClass * _Nullable)system providers:(NSArray<NSString *> * _Nullable)providers __attribute__((swift_name("doCopy(account:system:providers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardAccount * _Nullable account __attribute__((swift_name("account")));
@property (readonly) NSArray<NSString *> * _Nullable providers __attribute__((swift_name("providers")));
@property (readonly) BiometridStandardSystemClass * _Nullable system __attribute__((swift_name("system")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data.Companion")))
@interface BiometridStandardDataCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface BiometridStandardError : BiometridStandardBase
- (instancetype)initWithMessage:(NSString * _Nullable)message path:(NSArray<NSString *> * _Nullable)path type:(NSString * _Nullable)type __attribute__((swift_name("init(message:path:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardErrorCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardError *)doCopyMessage:(NSString * _Nullable)message path:(NSArray<NSString *> * _Nullable)path type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(message:path:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSArray<NSString *> * _Nullable path __attribute__((swift_name("path")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error.Companion")))
@interface BiometridStandardErrorCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface BiometridStandardErrorResponse : BiometridStandardBase
- (instancetype)initWithMeta:(BiometridStandardErrorResponseMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("init(meta:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardErrorResponse *)doCopyMeta:(BiometridStandardErrorResponseMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("doCopy(meta:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardErrorResponseMeta * _Nullable meta __attribute__((swift_name("meta")));
@property (readonly) BiometridStandardBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface BiometridStandardErrorResponseCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseData")))
@interface BiometridStandardErrorResponseData : BiometridStandardBase
- (instancetype)initWithErrors:(NSArray<BiometridStandardError *> * _Nullable)errors __attribute__((swift_name("init(errors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardErrorResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardErrorResponseData *)doCopyErrors:(NSArray<BiometridStandardError *> * _Nullable)errors __attribute__((swift_name("doCopy(errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BiometridStandardError *> * _Nullable errors __attribute__((swift_name("errors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseData.Companion")))
@interface BiometridStandardErrorResponseDataCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardErrorResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseMeta")))
@interface BiometridStandardErrorResponseMeta : BiometridStandardBase
- (instancetype)initWithCode:(NSString * _Nullable)code message:(NSString * _Nullable)message data:(BiometridStandardErrorResponseData * _Nullable)data __attribute__((swift_name("init(code:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardErrorResponseMetaCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardErrorResponseMeta *)doCopyCode:(NSString * _Nullable)code message:(NSString * _Nullable)message data:(BiometridStandardErrorResponseData * _Nullable)data __attribute__((swift_name("doCopy(code:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) BiometridStandardErrorResponseData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseMeta.Companion")))
@interface BiometridStandardErrorResponseMetaCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardErrorResponseMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field")))
@interface BiometridStandardField : BiometridStandardBase
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id alias:(NSString * _Nullable)alias rules:(NSArray<BiometridStandardRule *> * _Nullable)rules __attribute__((swift_name("init(type:id:alias:rules:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardFieldCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardField *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id alias:(NSString * _Nullable)alias rules:(NSArray<BiometridStandardRule *> * _Nullable)rules __attribute__((swift_name("doCopy(type:id:alias:rules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<BiometridStandardRule *> * _Nullable rules __attribute__((swift_name("rules")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Companion")))
@interface BiometridStandardFieldCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("General")))
@interface BiometridStandardGeneral : BiometridStandardBase
- (instancetype)initWithSplashScreen:(BiometridStandardBoolean * _Nullable)splashScreen startScreen:(BiometridStandardBoolean * _Nullable)startScreen flowScreen:(BiometridStandardBoolean * _Nullable)flowScreen menu:(BiometridStandardBoolean * _Nullable)menu stepConcludedScreen:(BiometridStandardBoolean * _Nullable)stepConcludedScreen finishScreen:(BiometridStandardBoolean * _Nullable)finishScreen __attribute__((swift_name("init(splashScreen:startScreen:flowScreen:menu:stepConcludedScreen:finishScreen:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardGeneralCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardGeneral *)doCopySplashScreen:(BiometridStandardBoolean * _Nullable)splashScreen startScreen:(BiometridStandardBoolean * _Nullable)startScreen flowScreen:(BiometridStandardBoolean * _Nullable)flowScreen menu:(BiometridStandardBoolean * _Nullable)menu stepConcludedScreen:(BiometridStandardBoolean * _Nullable)stepConcludedScreen finishScreen:(BiometridStandardBoolean * _Nullable)finishScreen __attribute__((swift_name("doCopy(splashScreen:startScreen:flowScreen:menu:stepConcludedScreen:finishScreen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardBoolean * _Nullable finishScreen __attribute__((swift_name("finishScreen")));
@property (readonly) BiometridStandardBoolean * _Nullable flowScreen __attribute__((swift_name("flowScreen")));
@property (readonly) BiometridStandardBoolean * _Nullable menu __attribute__((swift_name("menu")));
@property (readonly) BiometridStandardBoolean * _Nullable splashScreen __attribute__((swift_name("splashScreen")));
@property (readonly) BiometridStandardBoolean * _Nullable startScreen __attribute__((swift_name("startScreen")));
@property (readonly) BiometridStandardBoolean * _Nullable stepConcludedScreen __attribute__((swift_name("stepConcludedScreen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("General.Companion")))
@interface BiometridStandardGeneralCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardGeneralCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowData")))
@interface BiometridStandardGetFlowData : BiometridStandardBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name steps:(NSArray<BiometridStandardGetFlowStep *> * _Nullable)steps __attribute__((swift_name("init(id:name:steps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardGetFlowDataCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardGetFlowData *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name steps:(NSArray<BiometridStandardGetFlowStep *> * _Nullable)steps __attribute__((swift_name("doCopy(id:name:steps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSArray<BiometridStandardGetFlowStep *> * _Nullable steps __attribute__((swift_name("steps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowData.Companion")))
@interface BiometridStandardGetFlowDataCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardGetFlowDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowResponse")))
@interface BiometridStandardGetFlowResponse : BiometridStandardBase
- (instancetype)initWithData:(BiometridStandardGetFlowData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("init(data:meta:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardGetFlowResponseCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardGetFlowResponse *)doCopyData:(BiometridStandardGetFlowData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("doCopy(data:meta:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardGetFlowData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) BiometridStandardMeta * _Nullable meta __attribute__((swift_name("meta")));
@property (readonly) BiometridStandardBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowResponse.Companion")))
@interface BiometridStandardGetFlowResponseCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardGetFlowResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowStep")))
@interface BiometridStandardGetFlowStep : BiometridStandardBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name next:(NSString * _Nullable)next settings:(BiometridStandardSettings * _Nullable)settings action:(BiometridStandardAction * _Nullable)action __attribute__((swift_name("init(id:name:next:settings:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardGetFlowStepCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardGetFlowStep *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name next:(NSString * _Nullable)next settings:(BiometridStandardSettings * _Nullable)settings action:(BiometridStandardAction * _Nullable)action __attribute__((swift_name("doCopy(id:name:next:settings:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable next __attribute__((swift_name("next")));
@property (readonly) BiometridStandardSettings * _Nullable settings __attribute__((swift_name("settings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFlowStep.Companion")))
@interface BiometridStandardGetFlowStepCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardGetFlowStepCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Icons")))
@interface BiometridStandardIcons : BiometridStandardBase
- (instancetype)initWithAction:(BiometridStandardAction * _Nullable)action general:(NSDictionary<NSString *, NSString *> * _Nullable)general __attribute__((swift_name("init(action:general:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardIconsCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardIcons *)doCopyAction:(BiometridStandardAction * _Nullable)action general:(NSDictionary<NSString *, NSString *> * _Nullable)general __attribute__((swift_name("doCopy(action:general:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable general __attribute__((swift_name("general")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Icons.Companion")))
@interface BiometridStandardIconsCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardIconsCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images")))
@interface BiometridStandardImages : BiometridStandardBase
- (instancetype)initWithLogo:(NSString * _Nullable)logo logoWhite:(NSString * _Nullable)logoWhite logoSplash:(NSString * _Nullable)logoSplash welcome:(NSString * _Nullable)welcome finish:(NSString * _Nullable)finish __attribute__((swift_name("init(logo:logoWhite:logoSplash:welcome:finish:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardImagesCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardImages *)doCopyLogo:(NSString * _Nullable)logo logoWhite:(NSString * _Nullable)logoWhite logoSplash:(NSString * _Nullable)logoSplash welcome:(NSString * _Nullable)welcome finish:(NSString * _Nullable)finish __attribute__((swift_name("doCopy(logo:logoWhite:logoSplash:welcome:finish:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable finish __attribute__((swift_name("finish")));
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));
@property (readonly) NSString * _Nullable logoSplash __attribute__((swift_name("logoSplash")));
@property (readonly) NSString * _Nullable logoWhite __attribute__((swift_name("logoWhite")));
@property (readonly) NSString * _Nullable welcome __attribute__((swift_name("welcome")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images.Companion")))
@interface BiometridStandardImagesCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardImagesCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeResponse")))
@interface BiometridStandardInitializeResponse : BiometridStandardBase
- (instancetype)initWithData:(BiometridStandardData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("init(data:meta:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardInitializeResponseCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardInitializeResponse *)doCopyData:(BiometridStandardData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("doCopy(data:meta:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) BiometridStandardMeta * _Nullable meta __attribute__((swift_name("meta")));
@property (readonly) BiometridStandardBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializeResponse.Companion")))
@interface BiometridStandardInitializeResponseCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardInitializeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta")))
@interface BiometridStandardMeta : BiometridStandardBase
- (instancetype)initWithMessage:(NSString * _Nullable)message code:(NSString * _Nullable)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardMetaCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardMeta *)doCopyMessage:(NSString * _Nullable)message code:(NSString * _Nullable)code __attribute__((swift_name("doCopy(message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta.Companion")))
@interface BiometridStandardMetaCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path")))
@interface BiometridStandardPath : BiometridStandardBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardPathCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardPath *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path.Companion")))
@interface BiometridStandardPathCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardPathCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider")))
@interface BiometridStandardProvider : BiometridStandardBase
- (instancetype)initWithProviderID:(NSString * _Nullable)providerID provider:(NSString * _Nullable)provider __attribute__((swift_name("init(providerID:provider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardProviderCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardProvider *)doCopyProviderID:(NSString * _Nullable)providerID provider:(NSString * _Nullable)provider __attribute__((swift_name("doCopy(providerID:provider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable provider __attribute__((swift_name("provider")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="providerId")
*/
@property (readonly) NSString * _Nullable providerID __attribute__((swift_name("providerID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider.Companion")))
@interface BiometridStandardProviderCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardProviderCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rule")))
@interface BiometridStandardRule : BiometridStandardBase
- (instancetype)initWithType:(NSString * _Nullable)type value:(NSArray<NSString *> * _Nullable)value __attribute__((swift_name("init(type:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardRuleCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardRule *)doCopyType:(NSString * _Nullable)type value:(NSArray<NSString *> * _Nullable)value __attribute__((swift_name("doCopy(type:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSArray<NSString *> * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rule.Companion")))
@interface BiometridStandardRuleCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Settings")))
@interface BiometridStandardSettings : BiometridStandardBase
- (instancetype)initWithGeneral:(BiometridStandardGeneral * _Nullable)general __attribute__((swift_name("init(general:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardSettingsCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardSettings *)doCopyGeneral:(BiometridStandardGeneral * _Nullable)general __attribute__((swift_name("doCopy(general:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardGeneral * _Nullable general __attribute__((swift_name("general")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Settings.Companion")))
@interface BiometridStandardSettingsCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface BiometridStandardStep : BiometridStandardBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name action:(BiometridStandardStepResponseAction * _Nullable)action settings:(BiometridStandardStepResponseSettings * _Nullable)settings __attribute__((swift_name("init(id:name:action:settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardStepCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardStep *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name action:(BiometridStandardStepResponseAction * _Nullable)action settings:(BiometridStandardStepResponseSettings * _Nullable)settings __attribute__((swift_name("doCopy(id:name:action:settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardStepResponseAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BiometridStandardStepResponseSettings * _Nullable settings __attribute__((swift_name("settings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface BiometridStandardStepCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardStepCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponse")))
@interface BiometridStandardStepResponse : BiometridStandardBase
- (instancetype)initWithData:(BiometridStandardStepResponseData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("init(data:meta:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardStepResponseCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardStepResponse *)doCopyData:(BiometridStandardStepResponseData * _Nullable)data meta:(BiometridStandardMeta * _Nullable)meta status:(BiometridStandardBoolean * _Nullable)status __attribute__((swift_name("doCopy(data:meta:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardStepResponseData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) BiometridStandardMeta * _Nullable meta __attribute__((swift_name("meta")));
@property (readonly) BiometridStandardBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponse.Companion")))
@interface BiometridStandardStepResponseCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardStepResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseAction")))
@interface BiometridStandardStepResponseAction : BiometridStandardBase
- (instancetype)initWithType:(NSString * _Nullable)type fields:(NSArray<BiometridStandardField *> * _Nullable)fields provider:(BiometridStandardProvider * _Nullable)provider __attribute__((swift_name("init(type:fields:provider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardStepResponseActionCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardStepResponseAction *)doCopyType:(NSString * _Nullable)type fields:(NSArray<BiometridStandardField *> * _Nullable)fields provider:(BiometridStandardProvider * _Nullable)provider __attribute__((swift_name("doCopy(type:fields:provider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BiometridStandardField *> * _Nullable fields __attribute__((swift_name("fields")));
@property (readonly) BiometridStandardProvider * _Nullable provider __attribute__((swift_name("provider")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseAction.Companion")))
@interface BiometridStandardStepResponseActionCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardStepResponseActionCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseData")))
@interface BiometridStandardStepResponseData : BiometridStandardBase
- (instancetype)initWithProcessID:(NSString * _Nullable)processID flowID:(NSString * _Nullable)flowID step:(BiometridStandardStep * _Nullable)step path:(NSArray<BiometridStandardPath *> * _Nullable)path completedSteps:(NSArray<BiometridStandardKotlinx_serialization_jsonJsonElement *> * _Nullable)completedSteps __attribute__((swift_name("init(processID:flowID:step:path:completedSteps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardStepResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardStepResponseData *)doCopyProcessID:(NSString * _Nullable)processID flowID:(NSString * _Nullable)flowID step:(BiometridStandardStep * _Nullable)step path:(NSArray<BiometridStandardPath *> * _Nullable)path completedSteps:(NSArray<BiometridStandardKotlinx_serialization_jsonJsonElement *> * _Nullable)completedSteps __attribute__((swift_name("doCopy(processID:flowID:step:path:completedSteps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BiometridStandardKotlinx_serialization_jsonJsonElement *> * _Nullable completedSteps __attribute__((swift_name("completedSteps")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flowId")
*/
@property (readonly) NSString * _Nullable flowID __attribute__((swift_name("flowID")));
@property (readonly) NSArray<BiometridStandardPath *> * _Nullable path __attribute__((swift_name("path")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="processId")
*/
@property (readonly) NSString * _Nullable processID __attribute__((swift_name("processID")));
@property (readonly) BiometridStandardStep * _Nullable step __attribute__((swift_name("step")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseData.Companion")))
@interface BiometridStandardStepResponseDataCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardStepResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseSettings")))
@interface BiometridStandardStepResponseSettings : BiometridStandardBase
- (instancetype)initWithBackground:(BiometridStandardBoolean * _Nullable)background preventPrevious:(BiometridStandardBoolean * _Nullable)preventPrevious __attribute__((swift_name("init(background:preventPrevious:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardStepResponseSettingsCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardStepResponseSettings *)doCopyBackground:(BiometridStandardBoolean * _Nullable)background preventPrevious:(BiometridStandardBoolean * _Nullable)preventPrevious __attribute__((swift_name("doCopy(background:preventPrevious:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardBoolean * _Nullable background __attribute__((swift_name("background")));
@property (readonly) BiometridStandardBoolean * _Nullable preventPrevious __attribute__((swift_name("preventPrevious")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StepResponseSettings.Companion")))
@interface BiometridStandardStepResponseSettingsCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardStepResponseSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemClass")))
@interface BiometridStandardSystemClass : BiometridStandardBase
- (instancetype)initWithFileMaxSize:(BiometridStandardLong * _Nullable)fileMaxSize rtmURL:(NSString * _Nullable)rtmURL __attribute__((swift_name("init(fileMaxSize:rtmURL:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardSystemClassCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardSystemClass *)doCopyFileMaxSize:(BiometridStandardLong * _Nullable)fileMaxSize rtmURL:(NSString * _Nullable)rtmURL __attribute__((swift_name("doCopy(fileMaxSize:rtmURL:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardLong * _Nullable fileMaxSize __attribute__((swift_name("fileMaxSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rtmUrl")
*/
@property (readonly) NSString * _Nullable rtmURL __attribute__((swift_name("rtmURL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemClass.Companion")))
@interface BiometridStandardSystemClassCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardSystemClassCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Translations")))
@interface BiometridStandardTranslations : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BiometridStandardTranslationsCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Translations.Companion")))
@interface BiometridStandardTranslationsCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardTranslationsCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Typography")))
@interface BiometridStandardTypography : BiometridStandardBase
- (instancetype)initWithFont:(NSString * _Nullable)font sizes:(NSDictionary<NSString *, NSArray<BiometridStandardDouble *> *> * _Nullable)sizes __attribute__((swift_name("init(font:sizes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardTypographyCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardTypography *)doCopyFont:(NSString * _Nullable)font sizes:(NSDictionary<NSString *, NSArray<BiometridStandardDouble *> *> * _Nullable)sizes __attribute__((swift_name("doCopy(font:sizes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable font __attribute__((swift_name("font")));
@property (readonly) NSDictionary<NSString *, NSArray<BiometridStandardDouble *> *> * _Nullable sizes __attribute__((swift_name("sizes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Typography.Companion")))
@interface BiometridStandardTypographyCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardTypographyCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("BiometridStandardRepositoryProtocol")))
@protocol BiometridStandardBiometridStandardRepositoryProtocol
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createProcessWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createProcess(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentStep(processId:completionHandler:)")));
- (BiometridStandardCustomization * _Nullable)getCustomization __attribute__((swift_name("getCustomization()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFlowWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getFlow(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeInitCallback:(id<BiometridStandardBiometridStandardInitCallback>)initCallback completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(initCallback:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previousStepProcessId:(NSString *)processId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("previousStep(processId:completionHandler:)")));
- (void)setCallback:(id<BiometridStandardBiometridStandardProcessCallback>)callback __attribute__((swift_name("set(callback:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepProcessId:(NSString *)processId data:(NSDictionary<NSString *, id> * _Nullable)data completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStep(processId:data:completionHandler:)")));
@property (readonly) id<BiometridStandardRequestsProtocol> requests __attribute__((swift_name("requests")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkSettings")))
@interface BiometridStandardNetworkSettings : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkSettings __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardNetworkSettings *shared __attribute__((swift_name("shared")));
- (void)setHostname:(NSString * _Nullable)hostname __attribute__((swift_name("set(hostname:)")));
- (void)setPins:(NSArray<NSString *> * _Nullable)pins __attribute__((swift_name("set(pins:)")));
@property (setter=setHostname_:) NSString * _Nullable hostname __attribute__((swift_name("hostname")));
@property (setter=setPins_:) NSArray<NSString *> * _Nullable pins __attribute__((swift_name("pins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoormanService")))
@interface BiometridStandardDoormanService : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)doormanService __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardDoormanService *shared __attribute__((swift_name("shared")));
- (BOOL)getInitStatus __attribute__((swift_name("getInitStatus()")));
- (void)setInitializeIsInitialized:(BOOL)isInitialized __attribute__((swift_name("setInitialize(isInitialized:)")));
@end

__attribute__((swift_name("INetworkService")))
@protocol BiometridStandardINetworkService
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeGetUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers responseHandler:(id<BiometridStandardKotlinSuspendFunction1>)responseHandler completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeGet(url:headers:responseHandler:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executePostUrl:(NSString *)url body:(id _Nullable)body headers:(NSDictionary<NSString *, NSString *> *)headers responseHandler:(id<BiometridStandardKotlinSuspendFunction1>)responseHandler completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executePost(url:body:headers:responseHandler:completionHandler:)")));
@end

__attribute__((swift_name("NetworkError")))
@interface BiometridStandardNetworkError : BiometridStandardBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError.HttpError")))
@interface BiometridStandardNetworkErrorHttpError : BiometridStandardNetworkError
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardNetworkErrorHttpError *)doCopyCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError.NetworkFailure")))
@interface BiometridStandardNetworkErrorNetworkFailure : BiometridStandardNetworkError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkFailure __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardNetworkErrorNetworkFailure *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError.NotInitialized")))
@interface BiometridStandardNetworkErrorNotInitialized : BiometridStandardNetworkError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardNetworkErrorNotInitialized *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError.UnknownError")))
@interface BiometridStandardNetworkErrorUnknownError : BiometridStandardNetworkError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknownError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardNetworkErrorUnknownError *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkService")))
@interface BiometridStandardNetworkService : BiometridStandardBase <BiometridStandardINetworkService>
- (instancetype)initWithClient:(BiometridStandardKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeGetUrl:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers responseHandler:(id<BiometridStandardKotlinSuspendFunction1>)responseHandler completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeGet(url:headers:responseHandler:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executePostUrl:(NSString *)url body:(id _Nullable)body headers:(NSDictionary<NSString *, NSString *> *)headers responseHandler:(id<BiometridStandardKotlinSuspendFunction1>)responseHandler completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executePost(url:body:headers:responseHandler:completionHandler:)")));
@end

__attribute__((swift_name("RequestsProtocol")))
@protocol BiometridStandardRequestsProtocol
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createProcessWithCompletionHandler_:(void (^)(BiometridStandardKotlinPair<BiometridStandardCreateProcessResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createProcess(completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentStepProcessId:(NSString *)processId completionHandler_:(void (^)(BiometridStandardKotlinPair<BiometridStandardStepResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentStep(processId:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFlowWithCompletionHandler_:(void (^)(BiometridStandardKotlinPair<BiometridStandardGetFlowResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFlow(completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeWithCompletionHandler:(void (^)(BiometridStandardKotlinPair<BiometridStandardInitializeResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previousStepProcessId:(NSString *)processId completionHandler_:(void (^)(BiometridStandardKotlinPair<BiometridStandardStepResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("previousStep(processId:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStepProcessId:(NSString *)processId data:(NSDictionary<NSString *, id> * _Nullable)data completionHandler_:(void (^)(BiometridStandardKotlinPair<BiometridStandardStepResponse *, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateStep(processId:data:completionHandler_:)")));
@end

__attribute__((swift_name("Result")))
@interface BiometridStandardResult<__covariant T, __covariant E> : BiometridStandardBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface BiometridStandardResultError<E> : BiometridStandardResult<BiometridStandardKotlinNothing *, E>
- (instancetype)initWithError:(E _Nullable)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardResultError<E> *)doCopyError:(E _Nullable)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) E _Nullable error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface BiometridStandardResultSuccess<T> : BiometridStandardResult<T, BiometridStandardKotlinNothing *>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientKt")))
@interface BiometridStandardHttpClientKt : BiometridStandardBase
+ (BiometridStandardKtor_client_coreHttpClient *)createHttpClient __attribute__((swift_name("createHttpClient()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkServiceKt")))
@interface BiometridStandardNetworkServiceKt : BiometridStandardBase
+ (BiometridStandardKtor_client_coreHttpClient *)createHttpClientWithJson __attribute__((swift_name("createHttpClientWithJson()")));
+ (id<BiometridStandardINetworkService>)createNetworkService __attribute__((swift_name("createNetworkService()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)get:(id<BiometridStandardINetworkService>)receiver url:(NSString *)url headers:(NSDictionary<NSString *, NSString *> *)headers completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(_:url:headers:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)post:(id<BiometridStandardINetworkService>)receiver url:(NSString *)url body:(id _Nullable)body headers:(NSDictionary<NSString *, NSString *> *)headers completionHandler:(void (^)(BiometridStandardResult<id, BiometridStandardNetworkError *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(_:url:body:headers:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface BiometridStandardPlatform_iosKt : BiometridStandardBase
+ (id<BiometridStandardPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BiometridStandardKotlinThrowable : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (BiometridStandardKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BiometridStandardKotlinException : BiometridStandardKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BiometridStandardKotlinRuntimeException : BiometridStandardKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface BiometridStandardKotlinIllegalStateException : BiometridStandardKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface BiometridStandardKotlinCancellationException : BiometridStandardKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BiometridStandardKotlinEnumCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BiometridStandardKotlinArray<T> : BiometridStandardBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BiometridStandardInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BiometridStandardKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BiometridStandardKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BiometridStandardKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BiometridStandardKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BiometridStandardKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BiometridStandardKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BiometridStandardKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BiometridStandardKotlinx_serialization_coreKSerializer <BiometridStandardKotlinx_serialization_coreSerializationStrategy, BiometridStandardKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface BiometridStandardKotlinx_serialization_jsonJsonElement : BiometridStandardBase
@property (class, readonly, getter=companion) BiometridStandardKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol BiometridStandardKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol BiometridStandardKotlinSuspendFunction1 <BiometridStandardKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol BiometridStandardKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<BiometridStandardKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol BiometridStandardKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface BiometridStandardKtor_client_coreHttpClient : BiometridStandardBase <BiometridStandardKotlinx_coroutines_coreCoroutineScope, BiometridStandardKtor_ioCloseable>
- (instancetype)initWithEngine:(id<BiometridStandardKtor_client_coreHttpClientEngine>)engine userConfig:(BiometridStandardKtor_client_coreHttpClientConfig<BiometridStandardKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (BiometridStandardKtor_client_coreHttpClient *)configBlock:(void (^)(BiometridStandardKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<BiometridStandardKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<BiometridStandardKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<BiometridStandardKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) BiometridStandardKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) BiometridStandardKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) BiometridStandardKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) BiometridStandardKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) BiometridStandardKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) BiometridStandardKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface BiometridStandardKotlinPair<__covariant A, __covariant B> : BiometridStandardBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BiometridStandardKotlinNothing : BiometridStandardBase
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BiometridStandardKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BiometridStandardKotlinx_serialization_coreEncoder
@required
- (id<BiometridStandardKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BiometridStandardKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BiometridStandardKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<BiometridStandardKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BiometridStandardKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BiometridStandardKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BiometridStandardKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<BiometridStandardKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<BiometridStandardKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BiometridStandardKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BiometridStandardKotlinx_serialization_coreDecoder
@required
- (id<BiometridStandardKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BiometridStandardKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BiometridStandardKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BiometridStandardKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface BiometridStandardKotlinx_serialization_jsonJsonElementCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol BiometridStandardKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<BiometridStandardKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<BiometridStandardKotlinCoroutineContextElement> _Nullable)getKey:(id<BiometridStandardKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<BiometridStandardKotlinCoroutineContext>)minusKeyKey:(id<BiometridStandardKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<BiometridStandardKotlinCoroutineContext>)plusContext:(id<BiometridStandardKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol BiometridStandardKtor_client_coreHttpClientEngine <BiometridStandardKotlinx_coroutines_coreCoroutineScope, BiometridStandardKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(BiometridStandardKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(BiometridStandardKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(BiometridStandardKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) BiometridStandardKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<BiometridStandardKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface BiometridStandardKtor_client_coreHttpClientEngineConfig : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property BiometridStandardKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface BiometridStandardKtor_client_coreHttpClientConfig<T> : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BiometridStandardKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(BiometridStandardKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<BiometridStandardKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(BiometridStandardKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(BiometridStandardKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol BiometridStandardKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol BiometridStandardKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<BiometridStandardKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface BiometridStandardKtor_eventsEvents : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(BiometridStandardKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<BiometridStandardKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(BiometridStandardKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(BiometridStandardKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface BiometridStandardKtor_utilsPipeline<TSubject, TContext> : BiometridStandardBase
- (instancetype)initWithPhases:(BiometridStandardKotlinArray<BiometridStandardKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(BiometridStandardKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(BiometridStandardKtor_utilsPipelinePhase *)reference phase:(BiometridStandardKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(BiometridStandardKtor_utilsPipelinePhase *)reference phase:(BiometridStandardKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase block:(id<BiometridStandardKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(BiometridStandardKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(BiometridStandardKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(BiometridStandardKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(BiometridStandardKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<BiometridStandardKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface BiometridStandardKtor_client_coreHttpReceivePipeline : BiometridStandardKtor_utilsPipeline<BiometridStandardKtor_client_coreHttpResponse *, BiometridStandardKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BiometridStandardKotlinArray<BiometridStandardKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface BiometridStandardKtor_client_coreHttpRequestPipeline : BiometridStandardKtor_utilsPipeline<id, BiometridStandardKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BiometridStandardKotlinArray<BiometridStandardKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface BiometridStandardKtor_client_coreHttpResponsePipeline : BiometridStandardKtor_utilsPipeline<BiometridStandardKtor_client_coreHttpResponseContainer *, BiometridStandardKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BiometridStandardKotlinArray<BiometridStandardKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface BiometridStandardKtor_client_coreHttpSendPipeline : BiometridStandardKtor_utilsPipeline<id, BiometridStandardKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(BiometridStandardKotlinArray<BiometridStandardKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(BiometridStandardKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<BiometridStandardKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BiometridStandardKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BiometridStandardKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BiometridStandardKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BiometridStandardKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BiometridStandardKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BiometridStandardKotlinx_serialization_coreSerializersModule : BiometridStandardBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<BiometridStandardKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BiometridStandardKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BiometridStandardKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BiometridStandardKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BiometridStandardKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BiometridStandardKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BiometridStandardKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BiometridStandardKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BiometridStandardKotlinx_serialization_coreSerialKind : BiometridStandardBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BiometridStandardKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BiometridStandardKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BiometridStandardKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BiometridStandardKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol BiometridStandardKotlinCoroutineContextElement <BiometridStandardKotlinCoroutineContext>
@required
@property (readonly) id<BiometridStandardKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol BiometridStandardKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface BiometridStandardKtor_client_coreHttpRequestData : BiometridStandardBase
- (instancetype)initWithUrl:(BiometridStandardKtor_httpUrl *)url method:(BiometridStandardKtor_httpHttpMethod *)method headers:(id<BiometridStandardKtor_httpHeaders>)headers body:(BiometridStandardKtor_httpOutgoingContent *)body executionContext:(id<BiometridStandardKotlinx_coroutines_coreJob>)executionContext attributes:(id<BiometridStandardKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<BiometridStandardKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BiometridStandardKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<BiometridStandardKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<BiometridStandardKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BiometridStandardKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface BiometridStandardKtor_client_coreHttpResponseData : BiometridStandardBase
- (instancetype)initWithStatusCode:(BiometridStandardKtor_httpHttpStatusCode *)statusCode requestTime:(BiometridStandardKtor_utilsGMTDate *)requestTime headers:(id<BiometridStandardKtor_httpHeaders>)headers version:(BiometridStandardKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<BiometridStandardKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<BiometridStandardKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<BiometridStandardKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BiometridStandardKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BiometridStandardKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface BiometridStandardKotlinAbstractCoroutineContextElement : BiometridStandardBase <BiometridStandardKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<BiometridStandardKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<BiometridStandardKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol BiometridStandardKotlinContinuationInterceptor <BiometridStandardKotlinCoroutineContextElement>
@required
- (id<BiometridStandardKotlinContinuation>)interceptContinuationContinuation:(id<BiometridStandardKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<BiometridStandardKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher : BiometridStandardKotlinAbstractCoroutineContextElement <BiometridStandardKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<BiometridStandardKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<BiometridStandardKotlinCoroutineContext>)context block:(id<BiometridStandardKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<BiometridStandardKotlinCoroutineContext>)context block:(id<BiometridStandardKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<BiometridStandardKotlinContinuation>)interceptContinuationContinuation:(id<BiometridStandardKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<BiometridStandardKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<BiometridStandardKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface BiometridStandardKtor_client_coreProxyConfig : BiometridStandardBase
- (instancetype)initWithUrl:(BiometridStandardKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol BiometridStandardKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(BiometridStandardKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) BiometridStandardKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface BiometridStandardKtor_utilsAttributeKey<T> : BiometridStandardBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface BiometridStandardKtor_eventsEventDefinition<T> : BiometridStandardBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol BiometridStandardKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface BiometridStandardKtor_utilsPipelinePhase : BiometridStandardBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol BiometridStandardKotlinSuspendFunction2 <BiometridStandardKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface BiometridStandardKtor_client_coreHttpReceivePipelinePhases : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol BiometridStandardKtor_httpHttpMessage
@required
@property (readonly) id<BiometridStandardKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface BiometridStandardKtor_client_coreHttpResponse : BiometridStandardBase <BiometridStandardKtor_httpHttpMessage, BiometridStandardKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<BiometridStandardKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) BiometridStandardKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) BiometridStandardKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface BiometridStandardKotlinUnit : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface BiometridStandardKtor_client_coreHttpRequestPipelinePhases : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol BiometridStandardKtor_httpHttpMessageBuilder
@required
@property (readonly) BiometridStandardKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface BiometridStandardKtor_client_coreHttpRequestBuilder : BiometridStandardBase <BiometridStandardKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<BiometridStandardKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<BiometridStandardKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<BiometridStandardKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (BiometridStandardKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(BiometridStandardKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (BiometridStandardKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(BiometridStandardKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(BiometridStandardKtor_httpURLBuilder *, BiometridStandardKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property BiometridStandardKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<BiometridStandardKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) BiometridStandardKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property BiometridStandardKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BiometridStandardKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface BiometridStandardKtor_client_coreHttpResponsePipelinePhases : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface BiometridStandardKtor_client_coreHttpResponseContainer : BiometridStandardBase
- (instancetype)initWithExpectedType:(BiometridStandardKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(BiometridStandardKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometridStandardKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface BiometridStandardKtor_client_coreHttpClientCall : BiometridStandardBase <BiometridStandardKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(BiometridStandardKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(BiometridStandardKtor_client_coreHttpClient *)client requestData:(BiometridStandardKtor_client_coreHttpRequestData *)requestData responseData:(BiometridStandardKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(BiometridStandardKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(BiometridStandardKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<BiometridStandardKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BiometridStandardKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<BiometridStandardKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<BiometridStandardKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property BiometridStandardKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface BiometridStandardKtor_client_coreHttpSendPipelinePhases : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) BiometridStandardKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BiometridStandardKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BiometridStandardKotlinKClass>)kClass provider:(id<BiometridStandardKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BiometridStandardKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BiometridStandardKotlinKClass>)kClass serializer:(id<BiometridStandardKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BiometridStandardKotlinKClass>)baseClass actualClass:(id<BiometridStandardKotlinKClass>)actualClass actualSerializer:(id<BiometridStandardKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BiometridStandardKotlinKClass>)baseClass defaultDeserializerProvider:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BiometridStandardKotlinKClass>)baseClass defaultDeserializerProvider:(id<BiometridStandardKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BiometridStandardKotlinKClass>)baseClass defaultSerializerProvider:(id<BiometridStandardKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BiometridStandardKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BiometridStandardKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BiometridStandardKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BiometridStandardKotlinKClass <BiometridStandardKotlinKDeclarationContainer, BiometridStandardKotlinKAnnotatedElement, BiometridStandardKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface BiometridStandardKtor_httpUrl : BiometridStandardBase
@property (class, readonly, getter=companion) BiometridStandardKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BiometridStandardKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface BiometridStandardKtor_httpHttpMethod : BiometridStandardBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol BiometridStandardKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BiometridStandardKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol BiometridStandardKtor_httpHeaders <BiometridStandardKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface BiometridStandardKtor_httpOutgoingContent : BiometridStandardBase
- (id _Nullable)getPropertyKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(BiometridStandardKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<BiometridStandardKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) BiometridStandardLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) BiometridStandardKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<BiometridStandardKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol BiometridStandardKotlinx_coroutines_coreJob <BiometridStandardKotlinCoroutineContextElement>
@required
- (id<BiometridStandardKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<BiometridStandardKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(BiometridStandardKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BiometridStandardKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<BiometridStandardKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(BiometridStandardKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<BiometridStandardKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(BiometridStandardKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<BiometridStandardKotlinx_coroutines_coreJob>)plusOther_:(id<BiometridStandardKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<BiometridStandardKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<BiometridStandardKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<BiometridStandardKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface BiometridStandardKtor_httpHttpStatusCode : BiometridStandardBase <BiometridStandardKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BiometridStandardKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (BiometridStandardKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (BiometridStandardKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface BiometridStandardKtor_utilsGMTDate : BiometridStandardBase <BiometridStandardKotlinComparable>
@property (class, readonly, getter=companion) BiometridStandardKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BiometridStandardKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BiometridStandardKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(BiometridStandardKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(BiometridStandardKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) BiometridStandardKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) BiometridStandardKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface BiometridStandardKtor_httpHttpProtocolVersion : BiometridStandardBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol BiometridStandardKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<BiometridStandardKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface BiometridStandardKotlinAbstractCoroutineContextKey<B, E> : BiometridStandardBase <BiometridStandardKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<BiometridStandardKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<BiometridStandardKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface BiometridStandardKotlinx_coroutines_coreCoroutineDispatcherKey : BiometridStandardKotlinAbstractCoroutineContextKey<id<BiometridStandardKotlinContinuationInterceptor>, BiometridStandardKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<BiometridStandardKotlinCoroutineContextKey>)baseKey safeCast:(id<BiometridStandardKotlinCoroutineContextElement> _Nullable (^)(id<BiometridStandardKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol BiometridStandardKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol BiometridStandardKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(BiometridStandardKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(BiometridStandardLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(BiometridStandardKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(BiometridStandardLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BiometridStandardKtor_ioChunkBuffer *)dst completionHandler:(void (^)(BiometridStandardInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(BiometridStandardKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(BiometridStandardKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(BiometridStandardInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(BiometridStandardInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(BiometridStandardInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(BiometridStandardBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(BiometridStandardByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(BiometridStandardDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(BiometridStandardFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BiometridStandardKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(BiometridStandardKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(BiometridStandardInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(BiometridStandardLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(BiometridStandardKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(BiometridStandardKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<BiometridStandardKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(BiometridStandardShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<BiometridStandardKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<BiometridStandardKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(BiometridStandardBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BiometridStandardKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol BiometridStandardKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BiometridStandardKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BiometridStandardKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BiometridStandardKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BiometridStandardKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface BiometridStandardKtor_utilsStringValuesBuilderImpl : BiometridStandardBase <BiometridStandardKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<BiometridStandardKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<BiometridStandardKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<BiometridStandardKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<BiometridStandardKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BiometridStandardMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface BiometridStandardKtor_httpHeadersBuilder : BiometridStandardKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<BiometridStandardKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface BiometridStandardKtor_client_coreHttpRequestBuilderCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface BiometridStandardKtor_httpURLBuilder : BiometridStandardBase
- (instancetype)initWithProtocol:(BiometridStandardKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<BiometridStandardKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<BiometridStandardKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<BiometridStandardKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property BiometridStandardKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface BiometridStandardKtor_utilsTypeInfo : BiometridStandardBase
- (instancetype)initWithType:(id<BiometridStandardKotlinKClass>)type reifiedType:(id<BiometridStandardKotlinKType>)reifiedType kotlinType:(id<BiometridStandardKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardKtor_utilsTypeInfo *)doCopyType:(id<BiometridStandardKotlinKClass>)type reifiedType:(id<BiometridStandardKotlinKType>)reifiedType kotlinType:(id<BiometridStandardKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BiometridStandardKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<BiometridStandardKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<BiometridStandardKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface BiometridStandardKtor_client_coreHttpClientCallCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol BiometridStandardKtor_client_coreHttpRequest <BiometridStandardKtor_httpHttpMessage, BiometridStandardKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<BiometridStandardKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BiometridStandardKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) BiometridStandardKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) BiometridStandardKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface BiometridStandardKtor_httpUrlCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol BiometridStandardKtor_httpParameters <BiometridStandardKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface BiometridStandardKtor_httpURLProtocol : BiometridStandardBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface BiometridStandardKtor_httpHttpMethodCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<BiometridStandardKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) BiometridStandardKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol BiometridStandardKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface BiometridStandardKtor_httpHeaderValueWithParameters : BiometridStandardBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BiometridStandardKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<BiometridStandardKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface BiometridStandardKtor_httpContentType : BiometridStandardKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<BiometridStandardKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<BiometridStandardKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(BiometridStandardKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (BiometridStandardKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (BiometridStandardKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol BiometridStandardKotlinx_coroutines_coreChildHandle <BiometridStandardKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(BiometridStandardKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<BiometridStandardKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol BiometridStandardKotlinx_coroutines_coreChildJob <BiometridStandardKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<BiometridStandardKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol BiometridStandardKotlinSequence
@required
- (id<BiometridStandardKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol BiometridStandardKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) BiometridStandardKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<BiometridStandardKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(BiometridStandardKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<BiometridStandardKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol BiometridStandardKotlinx_coroutines_coreSelectClause0 <BiometridStandardKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface BiometridStandardKtor_httpHttpStatusCodeCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) BiometridStandardKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<BiometridStandardKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface BiometridStandardKtor_utilsGMTDateCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface BiometridStandardKtor_utilsWeekDay : BiometridStandardKotlinEnum<BiometridStandardKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) BiometridStandardKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (BiometridStandardKotlinArray<BiometridStandardKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface BiometridStandardKtor_utilsMonth : BiometridStandardKotlinEnum<BiometridStandardKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) BiometridStandardKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (BiometridStandardKotlinArray<BiometridStandardKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface BiometridStandardKtor_httpHttpProtocolVersionCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (BiometridStandardKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) BiometridStandardKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface BiometridStandardKtor_ioMemory : BiometridStandardBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(BiometridStandardKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(BiometridStandardKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (BiometridStandardKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (BiometridStandardKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface BiometridStandardKtor_ioBuffer : BiometridStandardBase
- (instancetype)initWithMemory:(BiometridStandardKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) BiometridStandardKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (BiometridStandardKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(BiometridStandardKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) BiometridStandardKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface BiometridStandardKtor_ioChunkBuffer : BiometridStandardKtor_ioBuffer
- (instancetype)initWithMemory:(BiometridStandardKtor_ioMemory *)memory origin:(BiometridStandardKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<BiometridStandardKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(BiometridStandardKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (BiometridStandardKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<BiometridStandardKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) BiometridStandardKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) BiometridStandardKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BiometridStandardKotlinByteArray : BiometridStandardBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BiometridStandardByte *(^)(BiometridStandardInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BiometridStandardKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface BiometridStandardKtor_ioInput : BiometridStandardBase <BiometridStandardKtor_ioCloseable>
- (instancetype)initWithHead:(BiometridStandardKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BiometridStandardKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) BiometridStandardKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BiometridStandardKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BiometridStandardKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(BiometridStandardKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(BiometridStandardKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<BiometridStandardKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<BiometridStandardKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<BiometridStandardKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface BiometridStandardKtor_ioByteReadPacket : BiometridStandardKtor_ioInput
- (instancetype)initWithHead:(BiometridStandardKtor_ioChunkBuffer *)head pool:(id<BiometridStandardKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(BiometridStandardKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<BiometridStandardKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) BiometridStandardKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (BiometridStandardKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BiometridStandardKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(BiometridStandardKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol BiometridStandardKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (BiometridStandardKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol BiometridStandardKotlinAppendable
@required
- (id<BiometridStandardKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<BiometridStandardKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<BiometridStandardKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface BiometridStandardKtor_httpURLBuilderCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol BiometridStandardKtor_httpParametersBuilder <BiometridStandardKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol BiometridStandardKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<BiometridStandardKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<BiometridStandardKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface BiometridStandardKtor_httpURLProtocolCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) BiometridStandardKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, BiometridStandardKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface BiometridStandardKtor_httpHeaderValueParam : BiometridStandardBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (BiometridStandardKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface BiometridStandardKtor_httpHeaderValueWithParametersCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<BiometridStandardKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface BiometridStandardKtor_httpContentTypeCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) BiometridStandardKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol BiometridStandardKotlinx_coroutines_coreParentJob <BiometridStandardKotlinx_coroutines_coreJob>
@required
- (BiometridStandardKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol BiometridStandardKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<BiometridStandardKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<BiometridStandardKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface BiometridStandardKtor_utilsWeekDayCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BiometridStandardKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface BiometridStandardKtor_utilsMonthCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (BiometridStandardKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (BiometridStandardKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface BiometridStandardKtor_ioMemoryCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface BiometridStandardKtor_ioBufferCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol BiometridStandardKtor_ioObjectPool <BiometridStandardKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface BiometridStandardKtor_ioChunkBufferCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<BiometridStandardKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<BiometridStandardKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface BiometridStandardKotlinByteIterator : BiometridStandardBase <BiometridStandardKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BiometridStandardByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface BiometridStandardKtor_ioInputCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface BiometridStandardKtor_ioByteReadPacketCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometridStandardKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface BiometridStandardKotlinKTypeProjection : BiometridStandardBase
- (instancetype)initWithVariance:(BiometridStandardKotlinKVariance * _Nullable)variance type:(id<BiometridStandardKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometridStandardKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (BiometridStandardKotlinKTypeProjection *)doCopyVariance:(BiometridStandardKotlinKVariance * _Nullable)variance type:(id<BiometridStandardKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<BiometridStandardKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) BiometridStandardKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface BiometridStandardKotlinKVariance : BiometridStandardKotlinEnum<BiometridStandardKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometridStandardKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) BiometridStandardKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) BiometridStandardKotlinKVariance *out __attribute__((swift_name("out")));
+ (BiometridStandardKotlinArray<BiometridStandardKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<BiometridStandardKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface BiometridStandardKotlinKTypeProjectionCompanion : BiometridStandardBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometridStandardKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BiometridStandardKotlinKTypeProjection *)contravariantType:(id<BiometridStandardKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BiometridStandardKotlinKTypeProjection *)covariantType:(id<BiometridStandardKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BiometridStandardKotlinKTypeProjection *)invariantType:(id<BiometridStandardKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) BiometridStandardKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
