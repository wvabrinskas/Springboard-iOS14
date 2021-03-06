/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@interface SBSUIHandleDeviceLockSceneAction : BSAction

@property (nonatomic,readonly) long long sourceType; 
-(void)sendResponse:(id)arg1 ;
-(id)initWithSourceType:(long long)arg1 timeout:(double)arg2 withResponseHandler:(/*^block*/id)arg3 ;
-(long long)sourceType;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

