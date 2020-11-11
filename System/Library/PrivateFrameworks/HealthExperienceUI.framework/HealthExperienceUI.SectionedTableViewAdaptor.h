/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITableViewDataSource.h>

@class UITableView;

@interface HealthExperienceUI.SectionedTableViewAdaptor : NSObject <UITableViewDataSource> {

	 tableView;
	 dataProvider;

}

@property (retain,nonatomic) UITableView * tableView; 
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)init;
-(UITableView *)tableView;
@end
