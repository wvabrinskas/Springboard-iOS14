/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding> {

	BOOL _isFullSyncDone;
	long long _indexVersion;
	CNChangeHistoryAnchor* _fullSyncSnapshotAnchor;
	long long _fullSyncOffset;

}

@property (assign,nonatomic) long long indexVersion;                                      //@synthesize indexVersion=_indexVersion - In the implementation block
@property (assign,nonatomic) BOOL isFullSyncDone;                                         //@synthesize isFullSyncDone=_isFullSyncDone - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * fullSyncSnapshotAnchor;              //@synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor - In the implementation block
@property (assign,nonatomic) long long fullSyncOffset;                                    //@synthesize fullSyncOffset=_fullSyncOffset - In the implementation block
+(id)clientStateWithData:(id)arg1 logger:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isFullSyncDone;
-(long long)indexVersion;
-(void)setIndexVersion:(long long)arg1 ;
-(void)setIsFullSyncDone:(BOOL)arg1 ;
-(long long)fullSyncOffset;
-(CNChangeHistoryAnchor *)fullSyncSnapshotAnchor;
-(void)setFullSyncOffset:(long long)arg1 ;
-(void)setFullSyncSnapshotAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)data;
-(id)initWithCoder:(id)arg1 ;
@end
