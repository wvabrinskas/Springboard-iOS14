/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _INVocabularyConnection, NSString;

@interface INPreferences : NSObject {

	_INVocabularyConnection* _assistantdConnection;
	NSString* _cachedSiriLanguageCode;

}

@property (setter=_setCachedSiriLanguageCode:,copy) NSString * _cachedSiriLanguageCode;              //@synthesize cachedSiriLanguageCode=_cachedSiriLanguageCode - In the implementation block
+(id)sharedPreferences;
+(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
+(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)siriAuthorizationStatus;
+(id)siriLanguageCode;
-(id)init;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(id)_init;
-(NSString *)_cachedSiriLanguageCode;
-(void)assertThisProcessHasSiriEntitlement;
-(void)_updateWithExtensionContext:(id)arg1 ;
-(BOOL)_weAreRunningAsAnExtension;
-(long long)_siriAuthorizationStatus;
-(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
-(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_siriLanguageCode;
-(void)_setCachedSiriLanguageCode:(id)arg1 ;
@end
