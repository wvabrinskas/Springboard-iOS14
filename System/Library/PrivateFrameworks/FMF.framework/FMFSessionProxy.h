/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMFXPCInternalClientProtocol.h>

@class FMFSession, NSString;

@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol> {

	FMFSession* _session;

}

@property (assign,nonatomic,__weak) FMFSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(oneway void)abDidChange;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)modelDidLoad;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(void)setSession:(FMFSession *)arg1 ;
-(FMFSession *)session;
-(id)initWithFMFSession:(id)arg1 ;
@end
