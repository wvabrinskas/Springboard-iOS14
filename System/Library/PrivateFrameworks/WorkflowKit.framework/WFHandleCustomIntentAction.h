/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFHandleIntentAction.h>
#import <libobjc.A.dylib/WFCustomIntentDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFDynamicResolveParameterDataSource.h>
#import <libobjc.A.dylib/WFIntentDynamicResolverDataSource.h>

@class INIntentCodableDescription, INIntentResponseCodableDescription, NSString, NSDictionary, NSArray, INIntentExecutionInfo, INSchema, WFIntentDynamicResolver, WFIntentDynamicResolutionRequest;

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource> {

	INIntentCodableDescription* _codableDescription;
	INIntentResponseCodableDescription* _responseCodableDescription;
	NSString* _localizedName;
	NSString* _localizedKeyParameterDisplayName;
	NSDictionary* _descriptionDictionary;
	NSArray* _parameterDefinitions;
	id _parameterSummaryDefinition;
	NSDictionary* _inputDictionary;
	NSDictionary* _outputDictionary;
	NSString* _appIdentifier;
	INIntentExecutionInfo* _intentExecutionInfo;
	INSchema* _schema;
	WFIntentDynamicResolver* _dynamicResolver;
	WFIntentDynamicResolutionRequest* _lastDynamicResolutionRequest;

}

@property (nonatomic,copy,readonly) INIntentExecutionInfo * intentExecutionInfo;                           //@synthesize intentExecutionInfo=_intentExecutionInfo - In the implementation block
@property (nonatomic,readonly) INSchema * schema;                                                          //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIdentifier;                                              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) WFIntentDynamicResolver * dynamicResolver;                                  //@synthesize dynamicResolver=_dynamicResolver - In the implementation block
@property (nonatomic,retain) WFIntentDynamicResolutionRequest * lastDynamicResolutionRequest;              //@synthesize lastDynamicResolutionRequest=_lastDynamicResolutionRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)intentCategory;
-(BOOL)isDiscontinued;
-(INSchema *)schema;
-(id)intentDescription;
-(NSString *)appIdentifier;
-(id)descriptionDictionary;
-(id)slots;
-(id)name;
-(id)localizedName;
-(id)codableDescription;
-(id)inputDictionary;
-(id)outputDictionary;
-(void)initializeParameters;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 stringLocalizer:(id)arg4 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(id)createResourceManager;
-(void)startExecutingIntent:(id)arg1 ;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg1 ;
-(id)localizedKeyParameterDisplayName;
-(id)copyWithSerializedParameters:(id)arg1 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(BOOL)shouldInsertExpandingParameterForParameter:(id)arg1 ;
-(BOOL)populatesInputFromInputParameter;
-(void)configureResourcesForParameter:(id)arg1 ;
-(id)parameterDefinitions;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)enumerationAllowsMultipleValues:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)generateSkeletonIntentForDynamicResolver:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)resolveOptionsForUserInput:(id)arg1 forDynamicResolveParameter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 dynamicResolveParameter:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)localizedConfigurationPromptDialogForPamameter:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 className:(id)arg5 bundleIdentifier:(id)arg6 stringLocalizer:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 resolvedIntentExecutionInfo:(id)arg5 stringLocalizer:(id)arg6 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(id)requiredResourcesForIntentAvailableResource;
-(id)parametersByIntentSlotName;
-(void)setupParameter:(id)arg1 ;
-(id)createBundleAccessGrant;
-(id)responseCodableDescription;
-(id)parameterSummaryDefinition;
-(id)prettyErrorForIntentsExtensionError:(id)arg1 ;
-(void)setUpResolverIfNeededForParameter:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dynamicResolveParameterDidEndResolutionSession:(id)arg1 ;
-(INIntentExecutionInfo *)intentExecutionInfo;
-(WFIntentDynamicResolver *)dynamicResolver;
-(WFIntentDynamicResolutionRequest *)lastDynamicResolutionRequest;
-(void)setLastDynamicResolutionRequest:(WFIntentDynamicResolutionRequest *)arg1 ;
@end

