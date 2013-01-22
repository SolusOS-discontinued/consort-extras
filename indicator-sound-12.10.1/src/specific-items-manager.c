/* specific-items-manager.c generated by valac 0.16.1, the Vala compiler
 * generated from specific-items-manager.vala, do not modify */

/*
Copyright 2011 Canonical Ltd.

Authors:
    Conor Curran <conor.curran@canonical.com>

This program is free software: you can redistribute it and/or modify it 
under the terms of the GNU General Public License version 3, as published 
by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranties of 
MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR 
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along 
with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <libdbusmenu-glib/client.h>
#include <libdbusmenu-glib/dbusmenu-glib.h>
#include <libdbusmenu-glib/enum-types.h>
#include <libdbusmenu-glib/menuitem-proxy.h>
#include <libdbusmenu-glib/menuitem.h>
#include <libdbusmenu-glib/server.h>
#include <libdbusmenu-glib/types.h>
#include <gee.h>


#define TYPE_SPECIFIC_ITEMS_MANAGER (specific_items_manager_get_type ())
#define SPECIFIC_ITEMS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SPECIFIC_ITEMS_MANAGER, SpecificItemsManager))
#define SPECIFIC_ITEMS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SPECIFIC_ITEMS_MANAGER, SpecificItemsManagerClass))
#define IS_SPECIFIC_ITEMS_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SPECIFIC_ITEMS_MANAGER))
#define IS_SPECIFIC_ITEMS_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SPECIFIC_ITEMS_MANAGER))
#define SPECIFIC_ITEMS_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SPECIFIC_ITEMS_MANAGER, SpecificItemsManagerClass))

typedef struct _SpecificItemsManager SpecificItemsManager;
typedef struct _SpecificItemsManagerClass SpecificItemsManagerClass;
typedef struct _SpecificItemsManagerPrivate SpecificItemsManagerPrivate;

#define TYPE_PLAYER_CONTROLLER (player_controller_get_type ())
#define PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_CONTROLLER, PlayerController))
#define PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))
#define IS_PLAYER_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_CONTROLLER))
#define IS_PLAYER_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_CONTROLLER))
#define PLAYER_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_CONTROLLER, PlayerControllerClass))

typedef struct _PlayerController PlayerController;
typedef struct _PlayerControllerClass PlayerControllerClass;

#define SPECIFIC_ITEMS_MANAGER_TYPE_CATEGORY (specific_items_manager_category_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _PlayerControllerPrivate PlayerControllerPrivate;

#define TYPE_PLAYER_ITEM (player_item_get_type ())
#define PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLAYER_ITEM, PlayerItem))
#define PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLAYER_ITEM, PlayerItemClass))
#define IS_PLAYER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLAYER_ITEM))
#define IS_PLAYER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLAYER_ITEM))
#define PLAYER_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLAYER_ITEM, PlayerItemClass))

typedef struct _PlayerItem PlayerItem;
typedef struct _PlayerItemClass PlayerItemClass;

#define TYPE_MPRIS2_CONTROLLER (mpris2_controller_get_type ())
#define MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2Controller))
#define MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))
#define IS_MPRIS2_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MPRIS2_CONTROLLER))
#define IS_MPRIS2_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MPRIS2_CONTROLLER))
#define MPRIS2_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MPRIS2_CONTROLLER, Mpris2ControllerClass))

typedef struct _Mpris2Controller Mpris2Controller;
typedef struct _Mpris2ControllerClass Mpris2ControllerClass;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

struct _SpecificItemsManager {
	GObject parent_instance;
	SpecificItemsManagerPrivate * priv;
};

struct _SpecificItemsManagerClass {
	GObjectClass parent_class;
};

struct _SpecificItemsManagerPrivate {
	PlayerController* _owner;
	gchar* dbus_path;
	DbusmenuClient* client;
	GeeArrayList* _proxy_items;
	gint of_type;
};

typedef enum  {
	SPECIFIC_ITEMS_MANAGER_CATEGORY_TRACK,
	SPECIFIC_ITEMS_MANAGER_CATEGORY_PLAYER
} SpecificItemsManagercategory;

struct _PlayerController {
	GObject parent_instance;
	PlayerControllerPrivate * priv;
	gint current_state;
	DbusmenuMenuitem* root_menu;
	GeeArrayList* custom_items;
	Mpris2Controller* mpris_bridge;
	gboolean* use_playlists;
};

struct _PlayerControllerClass {
	GObjectClass parent_class;
};


static gpointer specific_items_manager_parent_class = NULL;

GType specific_items_manager_get_type (void) G_GNUC_CONST;
GType player_controller_get_type (void) G_GNUC_CONST;
#define SPECIFIC_ITEMS_MANAGER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SPECIFIC_ITEMS_MANAGER, SpecificItemsManagerPrivate))
enum  {
	SPECIFIC_ITEMS_MANAGER_DUMMY_PROPERTY,
	SPECIFIC_ITEMS_MANAGER_PROXY_ITEMS
};
GType specific_items_manager_category_get_type (void) G_GNUC_CONST;
SpecificItemsManager* specific_items_manager_new (PlayerController* controller, const gchar* path, SpecificItemsManagercategory which_type);
SpecificItemsManager* specific_items_manager_construct (GType object_type, PlayerController* controller, const gchar* path, SpecificItemsManagercategory which_type);
static void specific_items_manager_set_owner (SpecificItemsManager* self, PlayerController* value);
static PlayerController* specific_items_manager_get_owner (SpecificItemsManager* self);
const gchar* player_controller_get_dbus_name (PlayerController* self);
static void specific_items_manager_on_root_changed (SpecificItemsManager* self, GObject* newroot);
static void _specific_items_manager_on_root_changed_dbusmenu_client_root_changed (DbusmenuClient* _sender, GObject* arg1, gpointer self);
static gint specific_items_manager_figure_out_positioning (SpecificItemsManager* self);
gint player_controller_get_menu_offset (PlayerController* self);
#define PLAYER_CONTROLLER_WIDGET_QUANTITY 4
GeeArrayList* specific_items_manager_get_proxy_items (SpecificItemsManager* self);
gint player_controller_track_specific_count (PlayerController* self);
GType player_item_get_type (void) G_GNUC_CONST;
GType mpris2_controller_get_type (void) G_GNUC_CONST;
static gboolean _bool_equal (const gboolean* s1, const gboolean* s2);
static void specific_items_manager_on_child_added (SpecificItemsManager* self, GObject* child, guint position);
static void _specific_items_manager_on_child_added_dbusmenu_menuitem_child_added (DbusmenuMenuitem* _sender, GObject* position, guint arg2, gpointer self);
static void specific_items_manager_on_child_removed (SpecificItemsManager* self, GObject* child);
static void _specific_items_manager_on_child_removed_dbusmenu_menuitem_child_removed (DbusmenuMenuitem* _sender, GObject* arg1, gpointer self);
static void specific_items_manager_set_proxy_items (SpecificItemsManager* self, GeeArrayList* value);
static GObject * specific_items_manager_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void specific_items_manager_finalize (GObject* obj);
static void _vala_specific_items_manager_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_specific_items_manager_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GType specific_items_manager_category_get_type (void) {
	static volatile gsize specific_items_manager_category_type_id__volatile = 0;
	if (g_once_init_enter (&specific_items_manager_category_type_id__volatile)) {
		static const GEnumValue values[] = {{SPECIFIC_ITEMS_MANAGER_CATEGORY_TRACK, "SPECIFIC_ITEMS_MANAGER_CATEGORY_TRACK", "track"}, {SPECIFIC_ITEMS_MANAGER_CATEGORY_PLAYER, "SPECIFIC_ITEMS_MANAGER_CATEGORY_PLAYER", "player"}, {0, NULL, NULL}};
		GType specific_items_manager_category_type_id;
		specific_items_manager_category_type_id = g_enum_register_static ("SpecificItemsManagercategory", values);
		g_once_init_leave (&specific_items_manager_category_type_id__volatile, specific_items_manager_category_type_id);
	}
	return specific_items_manager_category_type_id__volatile;
}


static void _specific_items_manager_on_root_changed_dbusmenu_client_root_changed (DbusmenuClient* _sender, GObject* arg1, gpointer self) {
	specific_items_manager_on_root_changed (self, arg1);
}


SpecificItemsManager* specific_items_manager_construct (GType object_type, PlayerController* controller, const gchar* path, SpecificItemsManagercategory which_type) {
	SpecificItemsManager * self = NULL;
	SpecificItemsManagercategory _tmp0_;
	PlayerController* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	PlayerController* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	const gchar* _tmp7_;
	DbusmenuClient* _tmp8_;
	DbusmenuClient* _tmp9_;
	g_return_val_if_fail (controller != NULL, NULL);
	g_return_val_if_fail (path != NULL, NULL);
	self = (SpecificItemsManager*) g_object_new (object_type, NULL);
	_tmp0_ = which_type;
	self->priv->of_type = (gint) _tmp0_;
	_tmp1_ = controller;
	specific_items_manager_set_owner (self, _tmp1_);
	_tmp2_ = path;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->priv->dbus_path);
	self->priv->dbus_path = _tmp3_;
	_tmp4_ = self->priv->_owner;
	_tmp5_ = player_controller_get_dbus_name (_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = self->priv->dbus_path;
	_tmp8_ = dbusmenu_client_new (_tmp6_, _tmp7_);
	_g_object_unref0 (self->priv->client);
	self->priv->client = _tmp8_;
	_tmp9_ = self->priv->client;
	g_signal_connect_object (_tmp9_, "root-changed", (GCallback) _specific_items_manager_on_root_changed_dbusmenu_client_root_changed, self, 0);
	return self;
}


SpecificItemsManager* specific_items_manager_new (PlayerController* controller, const gchar* path, SpecificItemsManagercategory which_type) {
	return specific_items_manager_construct (TYPE_SPECIFIC_ITEMS_MANAGER, controller, path, which_type);
}


static gboolean _bool_equal (const gboolean* s1, const gboolean* s2) {
	if (s1 == s2) {
		return TRUE;
	}
	if (s1 == NULL) {
		return FALSE;
	}
	if (s2 == NULL) {
		return FALSE;
	}
	return (*s1) == (*s2);
}


static gint specific_items_manager_figure_out_positioning (SpecificItemsManager* self) {
	gint result = 0;
	gint _result_;
	gint _tmp0_;
	gint _tmp22_;
	gint _tmp23_;
	g_return_val_if_fail (self != NULL, 0);
	_result_ = 0;
	_tmp0_ = self->priv->of_type;
	if (_tmp0_ == ((gint) SPECIFIC_ITEMS_MANAGER_CATEGORY_TRACK)) {
		PlayerController* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		PlayerController* _tmp4_;
		GeeArrayList* _tmp5_;
		gint _tmp6_;
		gint _tmp7_;
		_tmp1_ = self->priv->_owner;
		_tmp2_ = player_controller_get_menu_offset (_tmp1_);
		_tmp3_ = _tmp2_;
		_tmp4_ = self->priv->_owner;
		_tmp5_ = self->priv->_proxy_items;
		_tmp6_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp5_);
		_tmp7_ = _tmp6_;
		_result_ = (_tmp3_ + PLAYER_CONTROLLER_WIDGET_QUANTITY) + _tmp7_;
	} else {
		gint _tmp8_;
		_tmp8_ = self->priv->of_type;
		if (_tmp8_ == ((gint) SPECIFIC_ITEMS_MANAGER_CATEGORY_PLAYER)) {
			PlayerController* _tmp9_;
			gint _tmp10_;
			gint _tmp11_;
			PlayerController* _tmp12_;
			PlayerController* _tmp13_;
			gint _tmp14_ = 0;
			gint pos;
			gint _tmp15_ = 0;
			PlayerController* _tmp16_;
			gboolean* _tmp17_;
			gboolean _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			gint _tmp21_;
			_tmp9_ = self->priv->_owner;
			_tmp10_ = player_controller_get_menu_offset (_tmp9_);
			_tmp11_ = _tmp10_;
			_tmp12_ = self->priv->_owner;
			_tmp13_ = self->priv->_owner;
			_tmp14_ = player_controller_track_specific_count (_tmp13_);
			pos = (_tmp11_ + PLAYER_CONTROLLER_WIDGET_QUANTITY) + _tmp14_;
			_tmp16_ = self->priv->_owner;
			_tmp17_ = _tmp16_->use_playlists;
			_tmp18_ = TRUE;
			if (_bool_equal (_tmp17_, &_tmp18_) == TRUE) {
				_tmp15_ = 1;
			} else {
				_tmp15_ = 0;
			}
			_tmp19_ = pos;
			_tmp20_ = _tmp15_;
			pos = _tmp19_ + _tmp20_;
			_tmp21_ = pos;
			_result_ = _tmp21_;
		}
	}
	_tmp22_ = self->priv->of_type;
	_tmp23_ = _result_;
	g_debug ("specific-items-manager.vala:63: !!!!! Menu pos of type %i is = %i", _tmp22_, _tmp23_);
	result = _result_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _specific_items_manager_on_child_added_dbusmenu_menuitem_child_added (DbusmenuMenuitem* _sender, GObject* position, guint arg2, gpointer self) {
	specific_items_manager_on_child_added (self, position, arg2);
}


static void _specific_items_manager_on_child_removed_dbusmenu_menuitem_child_removed (DbusmenuMenuitem* _sender, GObject* arg1, gpointer self) {
	specific_items_manager_on_child_removed (self, arg1);
}


static void specific_items_manager_on_root_changed (SpecificItemsManager* self, GObject* newroot) {
	GObject* _tmp0_;
	DbusmenuClient* _tmp19_;
	DbusmenuMenuitem* _tmp20_ = NULL;
	DbusmenuMenuitem* _tmp21_;
	DbusmenuMenuitem* root;
	DbusmenuMenuitem* _tmp22_;
	DbusmenuMenuitem* _tmp23_;
	DbusmenuMenuitem* _tmp24_;
	GList* _tmp25_ = NULL;
	GList* _tmp26_ = NULL;
	GList* children;
	GList* _tmp27_;
	g_return_if_fail (self != NULL);
	_tmp0_ = newroot;
	if (_tmp0_ == NULL) {
		GeeArrayList* _tmp15_;
		GeeArrayList* _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		g_debug ("specific-items-manager.vala:70: root disappeared -remove proxyitems");
		{
			GeeArrayList* _tmp1_;
			GeeArrayList* _tmp2_;
			GeeArrayList* _p_list;
			GeeArrayList* _tmp3_;
			gint _tmp4_;
			gint _tmp5_;
			gint _p_size;
			gint _p_index;
			_tmp1_ = self->priv->_proxy_items;
			_tmp2_ = _g_object_ref0 (_tmp1_);
			_p_list = _tmp2_;
			_tmp3_ = _p_list;
			_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
			_tmp5_ = _tmp4_;
			_p_size = _tmp5_;
			_p_index = -1;
			while (TRUE) {
				gint _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
				GeeArrayList* _tmp9_;
				gint _tmp10_;
				gpointer _tmp11_ = NULL;
				DbusmenuMenuitemProxy* p;
				PlayerController* _tmp12_;
				DbusmenuMenuitem* _tmp13_;
				DbusmenuMenuitemProxy* _tmp14_;
				_tmp6_ = _p_index;
				_p_index = _tmp6_ + 1;
				_tmp7_ = _p_index;
				_tmp8_ = _p_size;
				if (!(_tmp7_ < _tmp8_)) {
					break;
				}
				_tmp9_ = _p_list;
				_tmp10_ = _p_index;
				_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
				p = (DbusmenuMenuitemProxy*) _tmp11_;
				_tmp12_ = self->priv->_owner;
				_tmp13_ = _tmp12_->root_menu;
				_tmp14_ = p;
				dbusmenu_menuitem_child_delete (_tmp13_, (DbusmenuMenuitem*) _tmp14_);
				_g_object_unref0 (p);
			}
			_g_object_unref0 (_p_list);
		}
		_tmp15_ = self->priv->_proxy_items;
		gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp15_);
		_tmp16_ = self->priv->_proxy_items;
		_tmp17_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp16_);
		_tmp18_ = _tmp17_;
		g_debug ("specific-items-manager.vala:75: array list size is now %i", _tmp18_);
		return;
	}
	_tmp19_ = self->priv->client;
	_tmp20_ = dbusmenu_client_get_root (_tmp19_);
	_tmp21_ = _g_object_ref0 (_tmp20_);
	root = _tmp21_;
	_tmp22_ = root;
	g_signal_connect_object (_tmp22_, "child-added", (GCallback) _specific_items_manager_on_child_added_dbusmenu_menuitem_child_added, self, 0);
	_tmp23_ = root;
	g_signal_connect_object (_tmp23_, "child-removed", (GCallback) _specific_items_manager_on_child_removed_dbusmenu_menuitem_child_removed, self, 0);
	_tmp24_ = root;
	_tmp25_ = dbusmenu_menuitem_get_children (_tmp24_);
	_tmp26_ = g_list_copy (_tmp25_);
	children = _tmp26_;
	_tmp27_ = children;
	{
		GList* child_collection = NULL;
		GList* child_it = NULL;
		child_collection = _tmp27_;
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
			void* child = NULL;
			child = child_it->data;
			{
				gint _tmp28_ = 0;
				gint pos;
				void* _tmp29_;
				DbusmenuMenuitem* item;
				DbusmenuMenuitem* _tmp30_;
				DbusmenuMenuitemProxy* _tmp31_;
				DbusmenuMenuitemProxy* proxy;
				GeeArrayList* _tmp32_;
				DbusmenuMenuitemProxy* _tmp33_;
				DbusmenuMenuitem* _tmp34_;
				const gchar* _tmp35_ = NULL;
				PlayerController* _tmp36_;
				DbusmenuMenuitem* _tmp37_;
				DbusmenuMenuitemProxy* _tmp38_;
				gint _tmp39_;
				_tmp28_ = specific_items_manager_figure_out_positioning (self);
				pos = _tmp28_;
				_tmp29_ = child;
				item = DBUSMENU_MENUITEM (_tmp29_);
				_tmp30_ = item;
				_tmp31_ = dbusmenu_menuitem_proxy_new (_tmp30_);
				proxy = _tmp31_;
				_tmp32_ = self->priv->_proxy_items;
				_tmp33_ = proxy;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp32_, _tmp33_);
				_tmp34_ = item;
				_tmp35_ = dbusmenu_menuitem_property_get (_tmp34_, DBUSMENU_MENUITEM_PROP_LABEL);
				g_debug ("specific-items-manager.vala:92: Proxy item of label = %s added to coll" \
"ection", _tmp35_);
				_tmp36_ = self->priv->_owner;
				_tmp37_ = _tmp36_->root_menu;
				_tmp38_ = proxy;
				_tmp39_ = pos;
				dbusmenu_menuitem_child_add_position (_tmp37_, (DbusmenuMenuitem*) _tmp38_, (guint) _tmp39_);
				_g_object_unref0 (proxy);
			}
		}
	}
	_g_list_free0 (children);
	_g_object_unref0 (root);
}


static void specific_items_manager_on_child_added (SpecificItemsManager* self, GObject* child, guint position) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (child != NULL);
	g_debug ("specific-items-manager.vala:101: On child added Specific root node");
}


static void specific_items_manager_on_child_removed (SpecificItemsManager* self, GObject* child) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (child != NULL);
	g_debug ("specific-items-manager.vala:106: On child removed Specific root node");
}


static PlayerController* specific_items_manager_get_owner (SpecificItemsManager* self) {
	PlayerController* result;
	PlayerController* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_owner;
	result = _tmp0_;
	return result;
}


static void specific_items_manager_set_owner (SpecificItemsManager* self, PlayerController* value) {
	PlayerController* _tmp0_;
	PlayerController* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_owner);
	self->priv->_owner = _tmp1_;
}


GeeArrayList* specific_items_manager_get_proxy_items (SpecificItemsManager* self) {
	GeeArrayList* result;
	GeeArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_proxy_items;
	result = _tmp0_;
	return result;
}


static void specific_items_manager_set_proxy_items (SpecificItemsManager* self, GeeArrayList* value) {
	GeeArrayList* _tmp0_;
	GeeArrayList* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_proxy_items);
	self->priv->_proxy_items = _tmp1_;
	g_object_notify ((GObject *) self, "proxy-items");
}


static GObject * specific_items_manager_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SpecificItemsManager * self;
	GeeArrayList* _tmp0_;
	GeeArrayList* _tmp1_;
	parent_class = G_OBJECT_CLASS (specific_items_manager_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = SPECIFIC_ITEMS_MANAGER (obj);
	_tmp0_ = gee_array_list_new (dbusmenu_menuitem_proxy_get_type (), (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_tmp1_ = _tmp0_;
	specific_items_manager_set_proxy_items (self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	return obj;
}


static void specific_items_manager_class_init (SpecificItemsManagerClass * klass) {
	specific_items_manager_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SpecificItemsManagerPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_specific_items_manager_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_specific_items_manager_set_property;
	G_OBJECT_CLASS (klass)->constructor = specific_items_manager_constructor;
	G_OBJECT_CLASS (klass)->finalize = specific_items_manager_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SPECIFIC_ITEMS_MANAGER_PROXY_ITEMS, g_param_spec_object ("proxy-items", "proxy-items", "proxy-items", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void specific_items_manager_instance_init (SpecificItemsManager * self) {
	self->priv = SPECIFIC_ITEMS_MANAGER_GET_PRIVATE (self);
}


static void specific_items_manager_finalize (GObject* obj) {
	SpecificItemsManager * self;
	self = SPECIFIC_ITEMS_MANAGER (obj);
	_g_object_unref0 (self->priv->_owner);
	_g_free0 (self->priv->dbus_path);
	_g_object_unref0 (self->priv->client);
	_g_object_unref0 (self->priv->_proxy_items);
	G_OBJECT_CLASS (specific_items_manager_parent_class)->finalize (obj);
}


GType specific_items_manager_get_type (void) {
	static volatile gsize specific_items_manager_type_id__volatile = 0;
	if (g_once_init_enter (&specific_items_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpecificItemsManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) specific_items_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpecificItemsManager), 0, (GInstanceInitFunc) specific_items_manager_instance_init, NULL };
		GType specific_items_manager_type_id;
		specific_items_manager_type_id = g_type_register_static (G_TYPE_OBJECT, "SpecificItemsManager", &g_define_type_info, 0);
		g_once_init_leave (&specific_items_manager_type_id__volatile, specific_items_manager_type_id);
	}
	return specific_items_manager_type_id__volatile;
}


static void _vala_specific_items_manager_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SpecificItemsManager * self;
	self = SPECIFIC_ITEMS_MANAGER (object);
	switch (property_id) {
		case SPECIFIC_ITEMS_MANAGER_PROXY_ITEMS:
		g_value_set_object (value, specific_items_manager_get_proxy_items (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_specific_items_manager_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SpecificItemsManager * self;
	self = SPECIFIC_ITEMS_MANAGER (object);
	switch (property_id) {
		case SPECIFIC_ITEMS_MANAGER_PROXY_ITEMS:
		specific_items_manager_set_proxy_items (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


