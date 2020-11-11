/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPFileDataStorage.h>
#import <TSPersistence/TSPDocumentResourceDataStorageInfo.h>

@protocol TSUResourceFileURLProviderTSUResourceRequest;
@class TSPDocumentResourceInfo, NSString;

@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDocumentResourceDataStorageInfo> {

	id<TSUResourceFileURLProvider><TSUResourceRequest> _resourceRequest;
	TSPDocumentResourceInfo* _documentResourceInfo;

}

@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fileURL;
-(id)init;
-(BOOL)isReadable;
-(CGSize)pixelSize;
-(unsigned long long)length;
-(BOOL)needsDownload;
-(id)downloadProgress;
-(unsigned long long)encodedLength;
-(id)fallbackColor;
-(id<TSUResourceRequest>)resourceRequest;
-(id)documentResourceLocator;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(TSPDocumentResourceInfo *)documentResourceInfo;
-(id)initWithResourceRequest:(id)arg1 documentResourceInfo:(id)arg2 ;
-(BOOL)archiveInfoMessage:(DataInfo*)arg1 archiver:(id)arg2 packageWriter:(id)arg3 ;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
