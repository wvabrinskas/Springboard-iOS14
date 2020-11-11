/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarRecord;
@interface AVTAvatarActionsRecordUpdate : NSObject {

	BOOL _fromLeft;
	id<AVTAvatarRecord> _avatarRecord;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) BOOL fromLeft;                                 //@synthesize fromLeft=_fromLeft - In the implementation block
+(id)recordUpdateForDeletingRecord:(id)arg1 withDataSource:(id)arg2 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 fromLeft:(BOOL)arg2 ;
-(BOOL)fromLeft;
@end
