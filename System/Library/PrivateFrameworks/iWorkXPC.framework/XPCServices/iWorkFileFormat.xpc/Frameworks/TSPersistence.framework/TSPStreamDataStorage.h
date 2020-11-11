/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPDataStorage.h>

@class NSString, SFUCryptoKey, TSUColor;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>

@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) BOOL isMissingData; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (assign,nonatomic) BOOL gilligan_isRemote; 
@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo; 
@property (nonatomic,readonly) unsigned CRC; 
@property (nonatomic,readonly) TSUColor * fallbackColor; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)readOnly;
-(BOOL)isReadable;
-(unsigned long long)length;
-(unsigned char)packageIdentifier;
-(unsigned long long)encodedLength;
-(NSString *)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)NSDataWithOptions:(unsigned long long)arg1 ;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(NSString *)documentResourceLocator;
-(id)filenameForPreferredFilename:(id)arg1 ;
-(BOOL)isInPackage:(id)arg1 ;
-(BOOL)isMissingData;
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 error:(id*)arg5 ;
-(id)AVAssetWithOptions:(id)arg1 forData:(id)arg2 ;
-(id)AVAssetWithOptions:(id)arg1 usingResourceLoaderForData:(id)arg2 ;
@end
