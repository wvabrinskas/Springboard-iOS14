/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RunningBoard/RunningBoard-Structs.h>
@class NSCache;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}
-(void)removeIdentity:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(void)dealloc;
@end

