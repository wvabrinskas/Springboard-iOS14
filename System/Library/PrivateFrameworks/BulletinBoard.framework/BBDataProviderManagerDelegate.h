/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBDataProviderManagerDelegate <NSObject>
@required
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
-(void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;

@end

