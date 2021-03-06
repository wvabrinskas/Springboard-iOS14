/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLTSectionInfoListDelegate <NSObject>
@required
-(BOOL)sectionInfoList:(id)arg1 override:(id)arg2 shouldApplyToSectionInfoForSectionID:(id)arg3;
-(BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg1;
-(void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 transaction:(id)arg3;
-(void)sectionInfoList:(id)arg1 makeAuthorizationPermanentForSectionID:(id)arg2;
-(void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 transaction:(id)arg3;

@end

