/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSMutableDictionary, NSArray, NSDictionary;

@interface PKRemoteAssetManifest : NSObject {

	NSURL* _fileURL;
	NSURL* _passURL;
	NSMutableDictionary* _remoteAssets;
	NSArray* _encryptedDeviceSpecificRemoteAssetFilenames;

}

@property (nonatomic,readonly) NSURL * fileURL;                                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteAssets;                                        //@synthesize remoteAssets=_remoteAssets - In the implementation block
@property (nonatomic,readonly) NSArray * encryptedDeviceSpecificRemoteAssetFilenames;              //@synthesize encryptedDeviceSpecificRemoteAssetFilenames=_encryptedDeviceSpecificRemoteAssetFilenames - In the implementation block
+(Class)_remoteAssestManifestItemClassWithValues:(id)arg1 ;
-(NSURL *)fileURL;
-(id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(NSDictionary *)remoteAssets;
-(id)deviceSpecificAsset;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3 ;
-(NSArray *)encryptedDeviceSpecificRemoteAssetFilenames;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id*)arg4 ;
@end
