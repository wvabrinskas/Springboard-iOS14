/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTUnsafePromise.h>

@interface CUTPromise : CUTUnsafePromise
+(id)all:(id)arg1 ;
+(id)failedPromiseWithError:(id)arg1 ;
+(id)fulfilledPromiseWithValue:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
@end

