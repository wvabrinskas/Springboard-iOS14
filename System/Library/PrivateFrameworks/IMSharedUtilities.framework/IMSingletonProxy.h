/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@interface IMSingletonProxy : NSProxy {

	id _singleton;
	id _singletonOverride;
	Class _overrideClass;

}
+(void)load;
-(id)description;
-(id)singletonRef;
-(BOOL)__isSingletonProxy__im;
-(id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2 ;
-(id)singletonOverrideRef;
-(void)setSingletonOverride:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

