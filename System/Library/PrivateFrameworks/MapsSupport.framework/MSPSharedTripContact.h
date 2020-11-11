/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, CNLabeledValue;

@interface MSPSharedTripContact : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _originalHandle;
	CNContact* _contact;
	CNLabeledValue* _labeledValue;

}

@property (nonatomic,readonly) BOOL isPhoneNumber; 
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;              //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSString * handleForIDS; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
+(id)_propertiesForFetching;
+(id)contactsFromCNContact:(id)arg1 matchingHandles:(id)arg2 ;
+(id)contactsFromHandles:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 ;
+(id)contactsFromIDSHandles:(id)arg1 ;
+(void)setAdditionalKeyDescriptorsForContactFetching:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 andIdentifiers:(id)arg2 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)_stringValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(CNLabeledValue *)labeledValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPhoneNumber;
-(id)initWithContactHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 handle:(id)arg2 ;
-(void)_populateFromContactUsingHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 labeledValue:(id)arg2 ;
-(NSString *)handleForIDS;
@end
