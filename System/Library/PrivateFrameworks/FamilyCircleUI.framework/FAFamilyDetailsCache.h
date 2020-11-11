/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FAFamilyDetailsCache : NSObject {

	unsigned long long _pendingInviteCount;
	BOOL _isValid;
	BOOL _isValidating;

}

@property (nonatomic,readonly) unsigned long long pendingInviteCount; 
+(id)sharedCache;
-(unsigned long long)pendingInviteCount;
-(void)invalidate;
-(void)_fetchPendingInviteCount;
-(void)_setPendingInviteCount:(unsigned long long)arg1 ;
@end
