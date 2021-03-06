/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying> {

	SISchemaClientAnyEvent* _event;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) BOOL hasTurnContext; 
@property (nonatomic,retain) SISchemaClientTurnContext * turnContext;              //@synthesize turnContext=_turnContext - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) SISchemaClientAnyEvent * event;                       //@synthesize event=_event - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(SISchemaClientAnyEvent *)event;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(SISchemaClientTurnContext *)turnContext;
-(void)setTurnContext:(SISchemaClientTurnContext *)arg1 ;
-(BOOL)hasTurnContext;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEvent;
-(void)copyTo:(id)arg1 ;
-(id)si_dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setEvent:(SISchemaClientAnyEvent *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

