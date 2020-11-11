/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMContactCardPreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id*)arg4 ;
+(CGSize)mapThumbnailFillSizeForWidth:(double)arg1 ;
+(BOOL)writesToDisk;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(id)UTITypes;
+(CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1 ;
+(id)mapSnapshotterQueue;
+(id)titleBarMaskImageForWidth:(double)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(id)vCardDataForURL:(id)arg1 ;
+(CLLocationCoordinate2D)_legacyCoordinateForvCardURL:(id)arg1 ;
+(id)vCardURLSForData:(id)arg1 ;
+(id)valueForKey:(id)arg1 forURLComponents:(id)arg2 ;
+(BOOL)supportsBlastDoor;
@end
