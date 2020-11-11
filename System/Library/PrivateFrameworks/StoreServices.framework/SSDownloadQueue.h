/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSDownloadManagerObserverPrivate.h>

@class SSDownloadManager, NSArray, NSSet, NSString;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {

	BOOL _autoFinishDownloads;
	SSDownloadManager* _downloadManager;
	CFSetRef _observers;

}

@property (nonatomic,readonly) NSArray * placeholderDownloads; 
@property (nonatomic,readonly) NSArray * preorders; 
@property (readonly) NSSet * downloadKinds; 
@property (readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (assign,nonatomic) BOOL shouldAutomaticallyFinishDownloads;              //@synthesize autoFinishDownloads=_autoFinishDownloads - In the implementation block
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
-(BOOL)isUsingNetwork;
-(id)initWithDownloadKinds:(id)arg1 ;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)downloads;
-(BOOL)reloadFromServer;
-(BOOL)canCancelDownload:(id)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(id)init;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(NSSet *)downloadKinds;
-(BOOL)cancelDownload:(id)arg1 ;
-(NSArray *)preorders;
-(void)_handleDownloadsDidChange:(id)arg1 ;
-(id)_initWithDownloadManagerOptions:(id)arg1 ;
-(void)_sendDownloadStatusChangedAtIndex:(long long)arg1 ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_messageObserversWithFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)_sendQueueChangedWithRemovals:(id)arg1 ;
-(BOOL)addDownload:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(id)initWithDownloadManagerOptions:(id)arg1 ;
-(void)addPlaceholderDownloads:(id)arg1 ;
-(id)downloadForItemIdentifier:(unsigned long long)arg1 ;
-(NSArray *)placeholderDownloads;
-(void)removePlaceholderDownload:(id)arg1 ;
-(SSDownloadManager *)downloadManager;
-(BOOL)startPreOrderDownload:(id)arg1 ;
-(void)_sendQueuePreOrdersChanged;
-(BOOL)shouldAutomaticallyFinishDownloads;
-(void)setShouldAutomaticallyFinishDownloads:(BOOL)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(void)dealloc;
@end
