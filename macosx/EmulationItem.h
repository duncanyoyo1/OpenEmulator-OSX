
/**
 * OpenEmulator
 * Mac OS X Emulation Item
 * (C) 2010-2011 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Implements an emulation item.
 */

#import <Cocoa/Cocoa.h>

#import "Document.h"

@interface EmulationItem : NSObject
{
	NSString *uid;
	NSString *label;
	NSImage *image;
	NSString *location;
	NSString *state;
	BOOL showable;
	BOOL mountable;
	BOOL mounted;
	
	NSMutableArray *settingsLabels;
	NSMutableArray *settingsValues;
	NSMutableArray *settingsTypes;
	NSMutableArray *settingsOptions;
	
	NSMutableArray *children;
}

- (id)initWithDocument:(Document *)document;
- (id)initWithLabel:(NSString *)theLabel;
- (id)initWithDeviceInfo:(void *)theDeviceInfo
			  inDocument:(Document *)document;
- (id)initWithDiskImageAtPath:(NSString *)thePath
			 storageComponent:(void *)theStorageComponent
					 location:(NSString *)theLocation
					 readOnly:(BOOL)isReadOnly
					   locked:(BOOL)isLocked;

- (NSImage *)getImage:(NSString *)path;

- (NSString *)uid;
- (NSImage *)image;
- (NSString *)label;
- (NSString *)location;
- (NSString *)state;
- (BOOL)showable;
- (BOOL)mountable;
- (BOOL)mounted;

- (NSInteger)numberOfSettings;
- (NSString *)labelForSettingAtIndex:(NSInteger)index;
- (NSString *)valueForSettingAtIndex:(NSInteger)index;
- (NSString *)typeForSettingAtIndex:(NSInteger)index;
- (NSArray *)optionsForSettingAtIndex:(NSInteger)index;

- (NSMutableArray *)children;
- (EmulationItem *)childWithUid:(NSString *)theUid;

@end
