/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import "ContactService_v62.h"

/**
 * author Bruno Farache
 */
@implementation ContactService_v62

- (NSDictionary *)getContact:(long)contactId {
	NSDictionary *_params = @{
		@"contactId": @(contactId)
	};

	NSDictionary *_command = @{@"/contact/get-contact": _params};

	return (NSDictionary *)[self.session invoke:_command];
}

- (int)getContactsCount:(long)classNameId classPK:(long)classPK {
	NSDictionary *_params = @{
		@"classNameId": @(classNameId),
		@"classPK": @(classPK)
	};

	NSDictionary *_command = @{@"/contact/get-contacts-count": _params};

	return (int)[self.session invoke:_command];
}

- (NSArray *)getContacts:(long)classNameId classPK:(long)classPK start:(int)start end:(int)end orderByComparator:(NSDictionary *)orderByComparator {
	NSDictionary *_params = @{
		@"classNameId": @(classNameId),
		@"classPK": @(classPK),
		@"start": @(start),
		@"end": @(end),
		@"orderByComparator": orderByComparator
	};

	NSDictionary *_command = @{@"/contact/get-contacts": _params};

	return (NSArray *)[self.session invoke:_command];
}

@end