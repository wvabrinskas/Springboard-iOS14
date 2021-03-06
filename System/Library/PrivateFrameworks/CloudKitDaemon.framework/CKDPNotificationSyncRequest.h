/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {

	unsigned _maxChanges;
	NSData* _serverChangeToken;
	BOOL _wantsChanges;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasServerChangeToken; 
@property (nonatomic,retain) NSData * serverChangeToken;               //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                      //@synthesize maxChanges=_maxChanges - In the implementation block
@property (assign,nonatomic) BOOL hasWantsChanges; 
@property (assign,nonatomic) BOOL wantsChanges;                        //@synthesize wantsChanges=_wantsChanges - In the implementation block
+(id)options;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)serverChangeToken;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServerChangeToken:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)wantsChanges;
-(void)setWantsChanges:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasServerChangeToken;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(BOOL)arg1 ;
-(BOOL)hasMaxChanges;
-(void)setHasWantsChanges:(BOOL)arg1 ;
-(BOOL)hasWantsChanges;
-(unsigned)maxChanges;
@end

