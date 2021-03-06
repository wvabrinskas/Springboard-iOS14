/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class TableViewManager, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {

	TableViewManager* _tableManager;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,readonly) TableViewManager * tableManager;                  //@synthesize tableManager=_tableManager - In the implementation block
@property (assign,nonatomic) id<TableViewManagerDelegate> delegate; 
-(void)setTableView:(UITableView *)arg1 ;
-(id<TableViewManagerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDelegate:(id<TableViewManagerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(TableViewManager *)tableManager;
-(void)initAUUITableViewControllerCommon;
@end

