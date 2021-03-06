/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPCryptoInfo.h>

@class SFUCryptoKey, NSArray, NSString;

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo> {

	SFUCryptoKey* _cryptoKey;
	unsigned long long _preferredBlockSize;
	NSArray* _blockInfos;
	unsigned long long _decodedLength;

}

@property (nonatomic,retain) NSArray * blockInfos;                                 //@synthesize blockInfos=_blockInfos - In the implementation block
@property (assign,nonatomic) unsigned long long decodedLength;                     //@synthesize decodedLength=_decodedLength - In the implementation block
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey;                           //@synthesize cryptoKey=_cryptoKey - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredBlockSize;              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (nonatomic,readonly) BOOL hasDecodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)preferredBlockSize;
-(unsigned long long)decodedLength;
-(NSArray *)blockInfos;
-(void)setBlockInfos:(NSArray *)arg1 ;
-(id)mutableCryptoInfoCopy;
-(BOOL)hasDecodedLength;
-(id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4 ;
-(id)initWithCryptoInfo:(id)arg1 ;
-(void)setDecodedLength:(unsigned long long)arg1 ;
@end

