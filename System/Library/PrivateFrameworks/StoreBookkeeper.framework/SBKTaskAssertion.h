/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {

	/*^block*/id _expireHandler;
	NSString* _debugInfo;
	SBKProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(id)description;
-(void)invalidate;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
@end
