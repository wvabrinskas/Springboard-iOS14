/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandResultMessageProtobuf, NSArray, NSNumber, NSDate, NSString;

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandResultMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned errorCode; 
@property (nonatomic,readonly) NSArray * handlerReturnStatuses; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3 ;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(unsigned)errorCode;
-(NSNumber *)originIdentifier;
-(id)_initWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3 ;
-(NSArray *)handlerReturnStatuses;
@end

