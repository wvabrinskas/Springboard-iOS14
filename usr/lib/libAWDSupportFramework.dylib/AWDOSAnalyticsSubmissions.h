/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDOSAnalyticsSubmissions : PBCodable <NSCopying> {

	unsigned long long _logs;
	unsigned long long _seconds;
	unsigned long long _sizeBytes;
	unsigned long long _timestamp;
	NSString* _connection;
	int _response;
	NSString* _routing;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResponse; 
@property (assign,nonatomic) int response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasConnection; 
@property (nonatomic,retain) NSString * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL hasRouting; 
@property (nonatomic,retain) NSString * routing;                        //@synthesize routing=_routing - In the implementation block
@property (assign,nonatomic) BOOL hasSizeBytes; 
@property (assign,nonatomic) unsigned long long sizeBytes;              //@synthesize sizeBytes=_sizeBytes - In the implementation block
@property (assign,nonatomic) BOOL hasLogs; 
@property (assign,nonatomic) unsigned long long logs;                   //@synthesize logs=_logs - In the implementation block
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned long long seconds;                //@synthesize seconds=_seconds - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)logs;
-(unsigned long long)seconds;
-(void)setRouting:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setSeconds:(unsigned long long)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasSeconds:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasResponse;
-(void)setSizeBytes:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)sizeBytes;
-(BOOL)isEqual:(id)arg1 ;
-(void)setResponse:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConnection:(NSString *)arg1 ;
-(void)setLogs:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)routing;
-(NSString *)connection;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)response;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSeconds;
-(void)dealloc;
-(void)setHasResponse:(BOOL)arg1 ;
-(BOOL)hasConnection;
-(BOOL)hasRouting;
-(void)setHasSizeBytes:(BOOL)arg1 ;
-(BOOL)hasSizeBytes;
-(void)setHasLogs:(BOOL)arg1 ;
-(BOOL)hasLogs;
@end

