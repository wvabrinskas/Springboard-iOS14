/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface Endpoint : NSObject {

	unsigned char _requireAck;
	BOOL _requireEncyption;
	NSUUID* _clientUUID;

}

@property (assign) unsigned char requireAck;              //@synthesize requireAck=_requireAck - In the implementation block
@property (assign) BOOL requireEncyption;                 //@synthesize requireEncyption=_requireEncyption - In the implementation block
@property (retain) NSUUID * clientUUID;                   //@synthesize clientUUID=_clientUUID - In the implementation block
-(void)setRequireEncyption:(BOOL)arg1 ;
-(void)setRequireAck:(unsigned char)arg1 ;
-(id)description;
-(unsigned char)requireAck;
-(BOOL)requireEncyption;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(NSUUID *)clientUUID;
@end

