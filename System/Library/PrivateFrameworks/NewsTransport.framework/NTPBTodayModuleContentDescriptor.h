/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBTodayModuleContentRequest;

@interface NTPBTodayModuleContentDescriptor : PBCodable <NSCopying> {

	NSString* _identifier;
	NTPBTodayModuleContentRequest* _request;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) NTPBTodayModuleContentRequest * request;              //@synthesize request=_request - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NTPBTodayModuleContentRequest *)request;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(void)setRequest:(NTPBTodayModuleContentRequest *)arg1 ;
-(BOOL)hasRequest;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
