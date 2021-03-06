/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSProtobuf.h>

@class PBCodable, IDSProtobuf;

@interface BLTPBProtobuf : IDSProtobuf {

	PBCodable* _protobuf;
	long long _sequenceNumberError;
	unsigned long long _sessionState;
	IDSProtobuf* _idsProtobuf;

}

@property (nonatomic,retain) IDSProtobuf * idsProtobuf;                      //@synthesize idsProtobuf=_idsProtobuf - In the implementation block
@property (nonatomic,retain) PBCodable * protobuf;                           //@synthesize protobuf=_protobuf - In the implementation block
@property (nonatomic,readonly) long long sequenceNumberError;                //@synthesize sequenceNumberError=_sequenceNumberError - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
-(unsigned long long)sessionState;
-(PBCodable *)protobuf;
-(void)setProtobuf:(PBCodable *)arg1 ;
-(id)initWithIDSProtobuf:(id)arg1 sequenceNumberManager:(id)arg2 ;
-(long long)sequenceNumberError;
-(id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 sequenceNumberManager:(id)arg4 ;
-(IDSProtobuf *)idsProtobuf;
-(void)setIdsProtobuf:(IDSProtobuf *)arg1 ;
@end

