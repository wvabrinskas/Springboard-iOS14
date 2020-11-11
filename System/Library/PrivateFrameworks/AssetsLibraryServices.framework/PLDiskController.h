/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)fileSystemSizeForPath:(id)arg1 ;
+(BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)arg1 ;
+(long long)freeDiskSpaceThreshold;
+(long long)diskSpaceAvailableForUse;
+(long long)diskSpaceAvailableForPath:(id)arg1 ;
+(id)mountPointForPath:(id)arg1 ;
-(id)init;
-(long long)bytesToAutomaticallyClear;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(void)updateAvailableDiskSpace;
-(BOOL)hasEnoughDiskToTakePicture;
-(void)_diskSpaceDidBecomeLow;
-(void)dealloc;
@end
