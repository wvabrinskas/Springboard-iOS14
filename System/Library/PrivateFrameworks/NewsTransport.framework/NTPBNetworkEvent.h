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

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {

	unsigned long long _connectDuration;
	unsigned long long _dnsDuration;
	long long _errorCode;
	unsigned long long _httpStatusCode;
	unsigned long long _requestDuration;
	unsigned long long _responseDuration;
	unsigned long long _responseSize;
	unsigned long long _sessionID;
	unsigned long long _startTime;
	int _cacheState;
	NSString* _requestUUID;
	NSString* _respondingPOP;
	int _type;
	NSString* _url;
	SCD_Struct_NT28 _has;

}

@property (nonatomic,readonly) int pbNetworkEventType; 
@property (nonatomic,readonly) int pbNetworkEventCacheState; 
@property (nonatomic,readonly) unsigned long long totalDuration; 
@property (nonatomic,readonly) unsigned long long endTime; 
@property (getter=isSuccess,nonatomic,readonly) BOOL success; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) unsigned long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) unsigned long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) unsigned long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) unsigned long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) int cacheState;                                   //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) unsigned long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestUUID; 
@property (nonatomic,retain) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPOP; 
@property (nonatomic,retain) NSString * respondingPOP;                         //@synthesize respondingPOP=_respondingPOP - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
-(unsigned long long)endTime;
-(unsigned long long)totalDuration;
-(BOOL)isSuccess;
-(int)pbNetworkEventType;
-(int)pbNetworkEventCacheState;
-(unsigned long long)responseSize;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(BOOL)hasSessionID;
-(unsigned long long)dnsDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasHttpStatusCode;
-(NSString *)requestUUID;
-(BOOL)hasResponseSize;
-(unsigned long long)hash;
-(unsigned long long)startTime;
-(unsigned long long)requestDuration;
-(unsigned long long)connectDuration;
-(BOOL)hasStartTime;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(unsigned long long)responseDuration;
-(NSString *)url;
-(int)cacheState;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(BOOL)hasUrl;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(unsigned long long)httpStatusCode;
-(void)setResponseDuration:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConnectDuration:(unsigned long long)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasCacheState;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasResponseDuration;
-(NSString *)respondingPOP;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCacheState:(BOOL)arg1 ;
-(BOOL)hasDnsDuration;
-(BOOL)hasType;
-(int)type;
-(BOOL)hasRequestDuration;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(void)setCacheState:(int)arg1 ;
-(void)setRespondingPOP:(NSString *)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(void)setDnsDuration:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasConnectDuration;
-(BOOL)hasRequestUUID;
-(BOOL)hasRespondingPOP;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(void)dealloc;
-(void)setRequestDuration:(unsigned long long)arg1 ;
@end

