/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserEngagement : PBCodable <NSCopying> {

	long long _messageAgeInWeeks;
	long long _topHitIndexInSpotlightList;
	long long _topHitIndexInTopHitsList;
	int _mailboxType;
	int _type;
	BOOL _isTopHitMessage;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasMessageAgeInWeeks; 
@property (assign,nonatomic) long long messageAgeInWeeks;                       //@synthesize messageAgeInWeeks=_messageAgeInWeeks - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                                   //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopHitMessage; 
@property (assign,nonatomic) BOOL isTopHitMessage;                              //@synthesize isTopHitMessage=_isTopHitMessage - In the implementation block
@property (assign,nonatomic) BOOL hasTopHitIndexInTopHitsList; 
@property (assign,nonatomic) long long topHitIndexInTopHitsList;                //@synthesize topHitIndexInTopHitsList=_topHitIndexInTopHitsList - In the implementation block
@property (assign,nonatomic) BOOL hasTopHitIndexInSpotlightList; 
@property (assign,nonatomic) long long topHitIndexInSpotlightList;              //@synthesize topHitIndexInSpotlightList=_topHitIndexInSpotlightList - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsType:(id)arg1 ;
-(int)mailboxType;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasMailboxType:(BOOL)arg1 ;
-(BOOL)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setMessageAgeInWeeks:(long long)arg1 ;
-(void)setIsTopHitMessage:(BOOL)arg1 ;
-(void)setTopHitIndexInTopHitsList:(long long)arg1 ;
-(void)setTopHitIndexInSpotlightList:(long long)arg1 ;
-(id)initWithEngagmentType:(int)arg1 receivedDate:(id)arg2 mailboxType:(int)arg3 isTopHit:(BOOL)arg4 messageListIndex:(long long)arg5 spotlightListIndex:(long long)arg6 ;
-(id)initWithEngagmentType:(int)arg1 message:(id)arg2 isTopHit:(BOOL)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5 ;
-(id)initWithEngagmentType:(int)arg1 isTopHit:(BOOL)arg2 ;
-(id)initWithEngagmentType:(int)arg1 ;
-(void)setHasMessageAgeInWeeks:(BOOL)arg1 ;
-(BOOL)hasMessageAgeInWeeks;
-(void)setHasIsTopHitMessage:(BOOL)arg1 ;
-(BOOL)hasIsTopHitMessage;
-(void)setHasTopHitIndexInTopHitsList:(BOOL)arg1 ;
-(BOOL)hasTopHitIndexInTopHitsList;
-(void)setHasTopHitIndexInSpotlightList:(BOOL)arg1 ;
-(BOOL)hasTopHitIndexInSpotlightList;
-(long long)messageAgeInWeeks;
-(BOOL)isTopHitMessage;
-(long long)topHitIndexInTopHitsList;
-(long long)topHitIndexInSpotlightList;
@end
