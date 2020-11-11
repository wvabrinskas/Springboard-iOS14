/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>
#import <libobjc.A.dylib/BRCModule.h>

@class brc_task_tracker, BRCFairScheduler, NSDate, NSMutableDictionary, BRCDeadlineScheduler, NSString;

@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule> {

	brc_task_tracker* _tracker;
	BRCFairScheduler* _fairScheduler;
	unsigned long long _activeDownloadsSize;
	NSDate* _lastDownloadRefresh;
	double _activeDownloadSizeRefreshInterval;
	NSMutableDictionary* _willRetryOperationProgress;
	BRCDeadlineScheduler* _downloadsDeadlineScheduler;

}

@property (nonatomic,readonly) BRCDeadlineScheduler * downloadsDeadlineScheduler;              //@synthesize downloadsDeadlineScheduler=_downloadsDeadlineScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
-(void)close;
-(void)schedule;
-(void)suspend;
-(void)resume;
-(void)_close;
-(void)cancel;
-(BOOL)isDownloadingItem:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(void)deleteJobsMatching:(id)arg1 ;
-(unsigned)recoverAndReportMissingJobs;
-(unsigned long long)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2 ;
-(void)_reportDownloadErrorForDocument:(id)arg1 error:(id)arg2 ;
-(id)_sanitizeRecord:(id)arg1 ;
-(void)_cancelJobs:(id)arg1 state:(int)arg2 ;
-(void)_finishDownloadCleanup:(id)arg1 ;
-(BOOL)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 ;
-(void)_createDownloadingJobForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(BOOL)arg5 ;
-(BOOL)shouldScheduleLosersEvictionForItem:(id)arg1 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3 ;
-(void)rescheduleJobsPendingWinnerForItem:(id)arg1 ;
-(void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(BOOL)arg3 applySchedulerState:(int*)arg4 ;
-(void)_finishedDownload:(id)arg1 syncContext:(id)arg2 operationID:(id)arg3 error:(id)arg4 ;
-(void)_willDownload:(id)arg1 operationID:(id)arg2 ;
-(unsigned long long)inFlightSize;
-(void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2 ;
-(void)_sendThumbnailsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_sendContentsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_sendLosersBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3 ;
-(void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 ;
-(void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)deleteDownloadingJobForItem:(id)arg1 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(id)_appLibraryForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 ;
-(void)rescheduleJobsPendingInitialSyncInZone:(id)arg1 ;
-(void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1 ;
-(void)cancelAndCleanupItemDownloads:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2 ;
-(void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3 ;
-(unsigned long long)sizeOfActiveDownloads;
-(BOOL)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2 ;
-(BOOL)makeContentLive:(id)arg1 ;
-(void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int*)arg3 ;
-(BOOL)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6 ;
-(BOOL)hasThumbnailToApplyForItem:(id)arg1 ;
-(void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int*)arg3 ;
-(BOOL)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 ;
-(void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BRCDeadlineScheduler *)downloadsDeadlineScheduler;
@end
