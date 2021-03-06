/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader {

	NSString* mTemporaryDirectory;
	XlObjectFactory* mXlObjectFactory;
	BOOL mUseStringOptimization;
	BOOL mIsFileStructuredStorage;
	const void* mBuffer;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
@property (nonatomic,readonly) XlBinaryReader* xlReader; 
@property (assign,nonatomic) BOOL useStringOptimization; 
@property (assign,nonatomic) BOOL isFileStructuredStorage; 
-(BOOL)start;
-(NSString *)temporaryDirectory;
-(id)read;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)arg1 ;
-(void)setIsFileStructuredStorage:(BOOL)arg1 ;
-(BOOL)isFileStructuredStorage;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(XlBinaryReader*)xlReader;
-(BOOL)useStringOptimization;
-(void)setUseStringOptimization:(BOOL)arg1 ;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
@end

