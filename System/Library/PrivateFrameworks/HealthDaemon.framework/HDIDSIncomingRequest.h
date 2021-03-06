/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class HDIDSParticipant, NSString, NSData, HDIDSOutgoingResponse, HDIDSMessageCenter;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {

	id _pbRequest;
	BOOL _expectsResponse;
	unsigned short _messageID;
	HDIDSParticipant* _fromParticipant;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	HDIDSOutgoingResponse* _response;
	HDIDSMessageCenter* _messageCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) HDIDSParticipant * fromParticipant;                     //@synthesize fromParticipant=_fromParticipant - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) HDIDSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) id pbRequest; 
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(NSString *)description;
-(NSString *)idsIdentifier;
-(NSData *)data;
-(void)setResponse:(HDIDSOutgoingResponse *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned short)messageID;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(HDIDSOutgoingResponse *)response;
-(void)dealloc;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(id)pbRequest;
-(void)setPbRequest:(id)arg1 ;
-(void)configureResponse;
-(HDIDSParticipant *)fromParticipant;
-(id)nanoSyncDescription;
-(void)setFromParticipant:(HDIDSParticipant *)arg1 ;
@end

