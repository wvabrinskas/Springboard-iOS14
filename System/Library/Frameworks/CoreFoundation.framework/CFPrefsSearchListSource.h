/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsPlistSource, CFPrefsCloudSource;

@interface CFPrefsSearchListSource : CFPrefsSource {

	CFDictionaryRef _keysToSources;
	CFStringRef _identifier;
	CFArrayRef _sourceList;
	CFSetRef _cloudKeys;
	CFArrayRef _cloudPrefixKeys;
	CFPrefsPlistSource* _standardSetTarget;
	CFPrefsCloudSource* _cloudSetTarget;
	BOOL initialized;

}
-(void)lock;
-(void)unlock;
-(CFStringRef)domainIdentifier;
-(BOOL)synchronize;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFStringRef)copyOSLogDescription;
-(id)description;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(BOOL)isDirectModeEnabled;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)generationCount;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(CFStringRef)arg1 containingPreferences:(id)arg2 ;
@end

