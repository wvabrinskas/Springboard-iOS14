/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject {

	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                        //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;               //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                       //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;              //@synthesize outputNonce=_outputNonce - In the implementation block
-(NSMutableData *)inputNonce;
-(id)init;
-(NSData *)inputKey;
-(void)setInputKey:(NSData *)arg1 ;
-(NSData *)outputKey;
-(NSMutableData *)outputNonce;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(id)decrypt:(const void*)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void*)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void*)arg5 authTagDataLength:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 ;
-(id)initWithInputKey:(id)arg1 outputKey:(id)arg2 ;
-(id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
@end

