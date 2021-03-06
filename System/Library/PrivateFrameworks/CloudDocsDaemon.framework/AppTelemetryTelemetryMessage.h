/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AppTelemetryTelemetryMessage : PBCodable <NSCopying> {

	unsigned long long _token;
	NSMutableArray* _events;
	SCD_Struct_Ap17 _has;

}

@property (nonatomic,retain) NSMutableArray * events;               //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasToken; 
@property (assign,nonatomic) unsigned long long token;              //@synthesize token=_token - In the implementation block
+(Class)eventsType;
-(void)setToken:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)events;
-(void)addEvents:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)token;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)hasToken;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)eventsCount;
-(void)setHasToken:(BOOL)arg1 ;
@end

