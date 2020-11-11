/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _MKUserLocationView, NSObject, CNContactStore, CNMonogrammer;

@interface _MKUserLocationViewImageProvider : NSObject {

	_MKUserLocationView* _view;
	NSObject*<OS_dispatch_queue> _queue;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;

}
-(id)init;
-(void)_updateDefaultImage;
-(id)_monogrammer;
-(void)_contactsChanged:(id)arg1 ;
-(void)_updateImage;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)_updateContactImage;
@end
