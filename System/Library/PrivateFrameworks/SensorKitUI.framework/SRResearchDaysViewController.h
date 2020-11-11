/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableSet;

@interface SRResearchDaysViewController : UITableViewController {

	double _end;
	long long _numberOfDays;
	NSArray* _tombstones;
	NSMutableSet* _deletedDays;

}

@property (nonatomic,retain) NSMutableSet * deletedDays;              //@synthesize deletedDays=_deletedDays - In the implementation block
@property (assign,nonatomic) double end;                              //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) long long numberOfDays;                  //@synthesize numberOfDays=_numberOfDays - In the implementation block
@property (nonatomic,retain) NSArray * tombstones;                    //@synthesize tombstones=_tombstones - In the implementation block
-(double)end;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setEnd:(double)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfDays;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)tombstones;
-(void)dealloc;
-(void)setNumberOfDays:(long long)arg1 ;
-(void)setTombstones:(NSArray *)arg1 ;
-(void)setDeletedDays:(NSMutableSet *)arg1 ;
-(NSMutableSet *)deletedDays;
-(id)datesFrom:(double)arg1 to:(double)arg2 ;
-(id)dateForRow:(long long)arg1 ;
@end
