/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGalleryPage.h>

@class CKRecordID, NSString, NSNumber, NSArray;

@interface WFMutableGalleryPage : WFGalleryPage {

	CKRecordID* identifier;
	NSString* name;
	NSNumber* minVersion;
	NSNumber* isRoot;
	NSArray* banners;
	NSArray* collections;
	NSArray* routines;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;
	NSArray* donations;
	NSArray* donationsGroupedByApp;
	NSArray* automationSuggestions;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * minVersion; 
@property (nonatomic,copy) NSNumber * isRoot; 
@property (nonatomic,copy) NSArray * banners; 
@property (nonatomic,copy) NSArray * collections; 
@property (nonatomic,copy) NSArray * routines; 
@property (nonatomic,copy) NSArray * donations; 
@property (nonatomic,copy) NSArray * donationsGroupedByApp; 
@property (nonatomic,copy) NSArray * automationSuggestions; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSArray *)collections;
-(CKRecordID *)base;
-(void)setBase:(CKRecordID *)arg1 ;
-(NSNumber *)isRoot;
-(void)setMinVersion:(NSNumber *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)banners;
-(void)setBanners:(NSArray *)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)language;
-(NSNumber *)minVersion;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(void)setCollections:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)donations;
-(NSArray *)routines;
-(NSArray *)donationsGroupedByApp;
-(NSArray *)automationSuggestions;
-(void)setAutomationSuggestions:(NSArray *)arg1 ;
-(void)setDonationsGroupedByApp:(NSArray *)arg1 ;
-(void)setDonations:(NSArray *)arg1 ;
-(void)setRoutines:(NSArray *)arg1 ;
-(void)setIsRoot:(NSNumber *)arg1 ;
@end
