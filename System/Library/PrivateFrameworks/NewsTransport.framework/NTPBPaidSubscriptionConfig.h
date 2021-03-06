/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {

	long long _maxGroupSizeIPad;
	long long _maxGroupSizeIPhone;
	long long _maxTimesHeadlineInGroup;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasMaxGroupSizeIPad; 
@property (assign,nonatomic) long long maxGroupSizeIPad;                     //@synthesize maxGroupSizeIPad=_maxGroupSizeIPad - In the implementation block
@property (assign,nonatomic) BOOL hasMaxGroupSizeIPhone; 
@property (assign,nonatomic) long long maxGroupSizeIPhone;                   //@synthesize maxGroupSizeIPhone=_maxGroupSizeIPhone - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTimesHeadlineInGroup; 
@property (assign,nonatomic) long long maxTimesHeadlineInGroup;              //@synthesize maxTimesHeadlineInGroup=_maxTimesHeadlineInGroup - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(long long)maxGroupSizeIPad;
-(void)setMaxGroupSizeIPad:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPad:(BOOL)arg1 ;
-(BOOL)hasMaxGroupSizeIPad;
-(long long)maxGroupSizeIPhone;
-(void)setMaxGroupSizeIPhone:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPhone:(BOOL)arg1 ;
-(BOOL)hasMaxGroupSizeIPhone;
-(long long)maxTimesHeadlineInGroup;
-(void)setMaxTimesHeadlineInGroup:(long long)arg1 ;
-(void)setHasMaxTimesHeadlineInGroup:(BOOL)arg1 ;
-(BOOL)hasMaxTimesHeadlineInGroup;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

