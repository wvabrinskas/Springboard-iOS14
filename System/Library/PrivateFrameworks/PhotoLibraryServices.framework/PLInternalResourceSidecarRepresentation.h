/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLSidecar.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL, PLInternalResource, NSManagedObjectID;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {

	PLInternalResource* _resource;

}

@property (assign,nonatomic,__weak) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSManagedObjectID *)objectID;
-(PLManagedAsset *)asset;
-(NSURL *)fileURL;
-(id)initWithResource:(id)arg1 ;
-(long long)ptpTrashedState;
-(NSString *)filename;
-(NSString *)description;
-(void)setResource:(PLInternalResource *)arg1 ;
-(NSNumber *)index;
-(short)indexValue;
-(NSDate *)modificationDate;
-(unsigned)resourceType;
-(unsigned long long)compressedSizeValue;
-(NSNumber *)compressedSize;
-(PLInternalResource *)resource;
-(void)setPtpTrashedState:(long long)arg1 ;
-(id)extension;
-(NSString *)originalFilename;
-(NSDate *)captureDate;
-(NSString *)uniformTypeIdentifier;
@end
